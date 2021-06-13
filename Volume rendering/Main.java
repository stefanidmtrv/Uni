import java.io.FileInputStream;
import java.io.FileNotFoundException;

import javafx.application.Application;
import javafx.beans.value.ChangeListener;
import javafx.beans.value.ObservableValue;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.layout.FlowPane;
import javafx.scene.control.Slider;
import javafx.scene.image.ImageView;
import javafx.scene.image.WritableImage;
import javafx.scene.image.PixelWriter;
import javafx.scene.layout.VBox;
import javafx.scene.paint.Color;
import javafx.stage.Stage;

import java.io.*;

// OK this is not best practice - maybe you'd like to create
// a volume data class?
// I won't give extra marks for that though.

public class Main extends Application {
    short cthead[][][]; //store the 3D volume data set
    short min, max; //min/max value in the 3D volume data set
    int CT_x_axis = 256;
    int CT_y_axis = 256;
    int CT_z_axis = 113;

    @Override
    public void start(Stage stage) throws FileNotFoundException, IOException {
        stage.setTitle("CThead Viewer");


        ReadData();

        //Good practice: Define your top view, front view and side view images (get the height and width correct)
        //Here's the top view - looking down on the top of the head (each slice we are looking at is CT_x_axis x CT_y_axis)
        int Top_width = CT_x_axis;
        int Top_height = CT_y_axis;

        //Here's the front view - looking at the front (nose) of the head (each slice we are looking at is CT_x_axis x CT_z_axis)
        int Front_width = CT_x_axis;
        int Front_height = CT_z_axis;

        //and you do the other (side view) - looking at the ear of the head
        int Side_width = CT_y_axis;
        int Side_height = CT_z_axis;

        //We need 3 things to see an image
        //1. We create an image we can write to
        WritableImage top_image = new WritableImage(Top_width, Top_height);
        WritableImage front_image = new WritableImage(Front_width, Front_height);
        WritableImage side_image = new WritableImage(Side_width, Side_height);

        //2. We create a view of that image
        ImageView TopView = new ImageView(top_image);
        ImageView FrontView = new ImageView(front_image);
        ImageView SideView = new ImageView(side_image);


        Button slice_button = new Button("slice"); //an example button to get the slice
        Button volrend_button = new Button("volrend"); //button for volume rendering

        //sliders to step through the slices (top and front directions) (remember 113 slices in top direction 0-112)
        Slider Top_slider = new Slider(0, CT_z_axis - 1, 0);
        Slider Front_slider = new Slider(0, CT_y_axis - 1, 0);
        Slider Side_slider = new Slider(0, CT_x_axis - 1, 0);

        //a slider to show the opacity of the skin
        Slider Skin_slider = new Slider(0, 100, 12);

        //a button showing the slice at value 0
        slice_button.setOnAction(new EventHandler<ActionEvent>() {
            @Override
            public void handle(ActionEvent event) {
                TopDownSlice(top_image, 0);
                FrontBackSlice(front_image, 0);
                SideSlice(side_image, 0);

            }
        });

        //a button showing the skin image at opacity 0.12
        volrend_button.setOnAction(new EventHandler<ActionEvent>() {
            @Override
            public void handle(ActionEvent event) {
                topSkinImage(top_image, 12);
                frontSkinImage(front_image, 12);
                sideSkinImage(side_image, 12);
            }
        });

        //a slider for moving through the slices for the top image
        Top_slider.valueProperty().addListener(
                new ChangeListener<Number>() {
                    public void changed(ObservableValue<? extends Number>
                                                observable, Number oldValue, Number newValue) {
                        TopDownSlice(top_image, newValue.intValue());
                    }
                });

        //a slider for moving through the slices for the front image
        Front_slider.valueProperty().addListener(
                new ChangeListener<Number>() {
                    public void changed(ObservableValue<? extends Number>
                                                observable, Number oldValue, Number newValue) {
                        FrontBackSlice(front_image, newValue.intValue());
                    }
                });

        //a slider for moving through the slices for the side image
        Side_slider.valueProperty().addListener(
                new ChangeListener<Number>() {
                    public void changed(ObservableValue<? extends Number>
                                                observable, Number oldValue, Number newValue) {
                        SideSlice(side_image, newValue.intValue());
                    }
                });

        //a slider moving through the opacity of the skin for the 3 images
        Skin_slider.valueProperty().addListener(
                new ChangeListener<Number>() {
                    public void changed(ObservableValue<? extends Number>
                                                observable, Number oldValue, Number newValue) {
                        topSkinImage(top_image, newValue.intValue());
                        frontSkinImage(front_image, newValue.intValue());
                        sideSkinImage(side_image, newValue.intValue());
                    }
                });

        FlowPane root = new FlowPane();

        root.setVgap(8);
        root.setHgap(4);
//https://examples.javacodegeeks.com/desktop-java/javafx/scene/image-scene/javafx-image-example/

        //3. Displaying the images, buttons and the sliders
        root.getChildren().addAll(TopView, FrontView, SideView, Top_slider, Front_slider,
                Side_slider, Skin_slider, slice_button, volrend_button);

        Scene scene = new Scene(root, 900, 480);
        stage.setScene(scene);
        stage.show();
    }


    //Function to read in the cthead data set
    public void ReadData() throws IOException {
        //File name is hardcoded here - much nicer to have a dialog to select it and capture the size from the user
        File file = new File("CThead");
        //Read the data quickly via a buffer (in C++ you can just do a single fread - I couldn't find if there is an equivalent in Java)
        DataInputStream in = new DataInputStream(new BufferedInputStream(new FileInputStream(file)));

        int i, j, k; //loop through the 3D data set

        min = Short.MAX_VALUE;
        max = Short.MIN_VALUE; //set to extreme values
        short read; //value read in
        int b1, b2; //data is wrong Endian (check wikipedia) for Java so we need to swap the bytes around

        cthead = new short[CT_z_axis][CT_y_axis][CT_x_axis]; //allocate the memory - note this is fixed for this data set
        //loop through the data reading it in
        for (k = 0; k < CT_z_axis; k++) {
            for (j = 0; j < CT_y_axis; j++) {
                for (i = 0; i < CT_x_axis; i++) {
                    //because the Endianess is wrong, it needs to be read byte at a time and swapped
                    b1 = ((int) in.readByte()) & 0xff; //the 0xff is because Java does not have unsigned types
                    b2 = ((int) in.readByte()) & 0xff; //the 0xff is because Java does not have unsigned types
                    read = (short) ((b2 << 8) | b1); //and swizzle the bytes around
                    if (read < min) min = read; //update the minimum
                    if (read > max) max = read; //update the maximum
                    cthead[k][j][i] = read; //put the short into memory (in C++ you can replace all this code with one fread)
                }
            }
        }
        System.out.println(min + " " + max); //diagnostic - for CThead this should be -1117, 2248
        //(i.e. there are 3366 levels of grey (we are trying to display on 256 levels of grey)
        //therefore histogram equalization would be a good thing
        //maybe put your histogram equalization code here to set up the mapping array
    }


    /*
       This function shows how to carry out an operation on an image.
       It obtains the dimensions of the image, and then loops through
       the image carrying out the copying of a slice of data into the
       image.
   */
    public void TopDownSlice(WritableImage image, int slice) {
        //Get image dimensions, and declare loop variables
        int w = (int) image.getWidth(), h = (int) image.getHeight();
        PixelWriter image_writer = image.getPixelWriter();

        double col;
        short datum;
        //Shows how to loop through each pixel and colour
        //Try to always use j for loops in y, and i for loops in x
        //as this makes the code more readable
        for (int j = 0; j < h; j++) {
            for (int i = 0; i < w; i++) {
                //at this point (i,j) is a single pixel in the image
                //here you would need to do something to (i,j) if the image size
                //does not match the slice size (e.g. during an image resizing operation
                //If you don't do this, your j,i could be outside the array bounds
                //In the framework, the image is 256x256 and the data set slices are 256x256
                //so I don't do anything - this also leaves you something to do for the assignment
                datum = cthead[slice][j][i];//get values from the slice
                //calculate the colour by performing a mapping from [min,max] -> 0 to 1 (float)
                //Java setColor uses float values from 0 to 1 rather than 0-255 bytes for colour

                col = (((float) datum - (float) min) / ((float) (max - min)));
                image_writer.setColor(i, j, Color.color(col, col, col, 1.0));

            }   // column loop
        }   // row loop
    }

    //A function that goes through the front to back slices
    private void FrontBackSlice(WritableImage image, int slice) {
        //Get image dimensions, and declare loop variables
        int w = (int) image.getWidth(), h = (int) image.getHeight();
        PixelWriter image_writer = image.getPixelWriter();

        double col;
        short datum;
        //looping through each pixel and colour
        for (int j = 0; j < h; j++) {
            for (int i = 0; i < w; i++) {

                datum = cthead[j][slice][i];//get values from the slice
                //calculate the colour by performing a mapping from [min,max] -> 0 to 1 (float)
                //Java setColor uses float values from 0 to 1 rather than 0-255 bytes for colour

                col = (((float) datum - (float) min) / ((float) (max - min)));
                image_writer.setColor(i, j, Color.color(col, col, col, 1.0));

            }
        }
    }

    //A function that goes through the side slices
    private void SideSlice(WritableImage image, int slice) {
        //Get image dimensions, and declare loop variables
        int w = (int) image.getWidth(), h = (int) image.getHeight();
        PixelWriter image_writer = image.getPixelWriter();

        double col;
        short datum;
        //looping through each pixel and colour
        for (int j = 0; j < h; j++) {
            for (int i = 0; i < w; i++) {

                datum = cthead[j][i][slice];//get values from the slice
                //calculate the colour by performing a mapping from [min,max] -> 0 to 1 (float)
                //Java setColor uses float values from 0 to 1 rather than 0-255 bytes for colour

                col = (((float) datum - (float) min) / ((float) (max - min)));
                image_writer.setColor(i, j, Color.color(col, col, col, 1.0));

            }
        }
    }

    //Performing volume rendering on the top image using the transfer function values
    private void topSkinImage(WritableImage image, int x) {
        //Get image dimensions, and declare loop variables
        int w = (int) image.getWidth(), h = (int) image.getHeight();
        PixelWriter image_writer = image.getPixelWriter();

        short datum;
        //Goes through each voxel and calculates the colour
        for (int j = 0; j < h; j++) {
            for (int i = 0; i < w; i++) {
                //Default values
                double aAccum = 1.0;
                double cAccum[] = {0.0, 0.0, 0.0};

                for (int k = 0; k < CT_z_axis; k++) {

                    datum = cthead[k][j][i];

                    double tfValues[] = TransferFunction(datum);//Getting the transfer function values

                    //Connecting the slider to the skin opacity
                    //tfValues[0] corresponds to red
                    //tfValues[1] corresponds to green
                    //tfValues[2] corresponds to blue
                    //tfValues[3] corresponds to opacity
                    if (tfValues[0] == 1.0 && tfValues[1] == 0.79 && tfValues[2] == 0.6) {
                        tfValues[3] = (double) x / 100;
                    }

                    //Formula for accumulating the new colours using the transfer function values
                    cAccum[0] = cAccum[0] + (tfValues[0] * tfValues[3] * aAccum);
                    cAccum[1] = cAccum[1] + (tfValues[1] * tfValues[3] * aAccum);
                    cAccum[2] = cAccum[2] + (tfValues[2] * tfValues[3] * aAccum);

                    //Limit the colour between 0 and 1
                    if (cAccum[0] > 1) {
                        cAccum[0] = 1;
                    }
                    if (cAccum[0] < 0) {
                        cAccum[0] = 0;
                    }
                    if (cAccum[1] > 1) {
                        cAccum[1] = 1;
                    }
                    if (cAccum[1] < 0) {
                        cAccum[1] = 0;
                    }
                    if (cAccum[2] > 1) {
                        cAccum[2] = 1;
                    }
                    if (cAccum[2] < 0) {
                        cAccum[2] = 0;
                    }

                    aAccum = aAccum * (1 - tfValues[3]);//updating the transparency

                    //Setting the new colour to the image


                }
                image_writer.setColor(i, j, Color.color(cAccum[0], cAccum[1], cAccum[2], 1.0));
            }

        }
    }

    //Performing volume rendering on the front image using the transfer function values
    private void frontSkinImage(WritableImage image, int x) {
        //Get image dimensions, and declare loop variables
        int w = (int) image.getWidth(), h = (int) image.getHeight();
        PixelWriter image_writer = image.getPixelWriter();

        short datum;
        //Goes through each voxel and calculates the colour
        for (int j = 0; j < h; j++) {
            for (int i = 0; i < w; i++) {
                //Default values
                double aAccum = 1.0;
                double cAccum[] = {0.0, 0.0, 0.0};

                for (int k = 0; k < CT_y_axis; k++) {

                    datum = cthead[j][k][i];

                    double tfValues[] = TransferFunction(datum);//Getting the transfer function values

                    //Connecting the slider to the skin opacity
                    //tfValues[0] corresponds to red
                    //tfValues[1] corresponds to green
                    //tfValues[2] corresponds to blue
                    //tfValues[3] corresponds to opacity
                    if (tfValues[0] == 1.0 && tfValues[1] == 0.79 && tfValues[2] == 0.6) {
                        tfValues[3] = (double) x / 100;
                    }

                    //Formula for accumulating the new colours using the transfer function values
                    cAccum[0] = cAccum[0] + (tfValues[0] * tfValues[3] * aAccum);
                    cAccum[1] = cAccum[1] + (tfValues[1] * tfValues[3] * aAccum);
                    cAccum[2] = cAccum[2] + (tfValues[2] * tfValues[3] * aAccum);

                    //Limit the colour between 0 and 1
                    if (cAccum[0] > 1) {
                        cAccum[0] = 1;
                    }
                    if (cAccum[0] < 0) {
                        cAccum[0] = 0;
                    }
                    if (cAccum[1] > 1) {
                        cAccum[1] = 1;
                    }
                    if (cAccum[1] < 0) {
                        cAccum[1] = 0;
                    }
                    if (cAccum[2] > 1) {
                        cAccum[2] = 1;
                    }
                    if (cAccum[2] < 0) {
                        cAccum[2] = 0;
                    }

                    //Updating the transparency
                    aAccum = aAccum * (1 - tfValues[3]);

                    //Setting the new colour to the image

                }
                image_writer.setColor(i, j, Color.color(cAccum[0], cAccum[1], cAccum[2], 1.0));
            }

        }
    }

    //Performing volume rendering on the front image using the transfer function values
    private void sideSkinImage(WritableImage image, int x) {
        //Get image dimensions, and declare loop variables
        int w = (int) image.getWidth(), h = (int) image.getHeight();
        PixelWriter image_writer = image.getPixelWriter();

        short datum;
        //Goes through each voxel and calculates the colour
        for (int j = 0; j < h; j++) {
            for (int i = 0; i < w; i++) {
                //Default values
                double aAccum = 1.0;
                double cAccum[] = {0.0, 0.0, 0.0};

                for (int k = 0; k < CT_x_axis; k++) {

                    datum = cthead[j][i][k];

                    double tfValues[] = TransferFunction(datum);//Getting the transfer function values

                    //Connecting the slider to the skin opacity
                    //tfValues[0] corresponds to red
                    //tfValues[1] corresponds to green
                    //tfValues[2] corresponds to blue
                    //tfValues[3] corresponds to opacity
                    if (tfValues[0] == 1.0 && tfValues[1] == 0.79 && tfValues[2] == 0.6) {
                        tfValues[3] = (double) x / 100;
                    }

                    //Formula for accumulating the new colours using the transfer function values
                    cAccum[0] = cAccum[0] + (tfValues[0] * tfValues[3] * aAccum);
                    cAccum[1] = cAccum[1] + (tfValues[1] * tfValues[3] * aAccum);
                    cAccum[2] = cAccum[2] + (tfValues[2] * tfValues[3] * aAccum);

                    //Limit the colour between 0 and 1
                    if (cAccum[0] > 1) {
                        cAccum[0] = 1;
                    }
                    if (cAccum[0] < 0) {
                        cAccum[0] = 0;
                    }
                    if (cAccum[1] > 1) {
                        cAccum[1] = 1;
                    }
                    if (cAccum[1] < 0) {
                        cAccum[1] = 0;
                    }
                    if (cAccum[2] > 1) {
                        cAccum[2] = 1;
                    }
                    if (cAccum[2] < 0) {
                        cAccum[2] = 0;
                    }

                    //Updating the transparency
                    aAccum = aAccum * (1 - tfValues[3]);

                    //Setting the new colour to the image

                } image_writer.setColor(i, j, Color.color(cAccum[0], cAccum[1], cAccum[2], 1.0));
            }

        }
    }

    //A function which returns the rgb values and the opacity
    //depending on the datum range
    private double[] TransferFunction(short datum) {

        if (datum <= -300) {
            return new double[]{0.0, 0.0, 0.0, 0.0};
        } else if (datum > -300 && datum <= 49) {
            return new double[]{1.0, 0.79, 0.6, 0.12};
        } else if (datum > 49 && datum <= 299) {
            return new double[]{0.0, 0.0, 0.0, 0.0};
        } else if (datum > 299 && datum <= 4096) {
            return new double[]{1.0, 1.0, 1.0, 0.8};
        } else {
            return new double[]{0.0, 0.0, 0.0, 0.0};
        }

    }

    public static void main(String[] args) {
        launch();
    }

}