/**
 * <P>-ReadShapeFile.java</p>
 * <P> @version 2.0</p>
 * <P>- last modification 04/03/2020</p>
 * <P> @author Stefani</p>
 * <P>- no copyright</p>
 * <P>- purpose Reading the text files and every different shape</p>
 * <P>- Originally written by Bette Bultena but heavily modified for the purposes of CS-115 by Daniel Archambault and Liam O'Reilly</p>
 */

import java.io.*;
import javafx.scene.paint.Color;
import java.io.*;
import java.util.Scanner;

public class ReadShapeFile {

    /**
     *<p>Returns the circle shape</p>
     *<P>@return Circle</P>
     *<P>@param in the scanner of the file</P>
     *<P>has side effect</P>
     *<P>not referentially transparent</P>
     */
    private static Circle circle(Scanner in) {
        int px = in.nextInt();
        int py = in.nextInt();
        int vx = in.nextInt();
        int vy = in.nextInt();
        boolean isFilled = in.nextBoolean();
        int diameter = in.nextInt();
        double r = in.nextDouble() / 255;
        double g = in.nextDouble() / 255;
        double b = in.nextDouble() / 255;
        int insertionTime = in.nextInt();
        Circle circle = new Circle(insertionTime, px, py, vx, vy, diameter, Color.color(r, g, b), isFilled);
        System.out.println(circle.toString());
        return circle;
    }
    /**
     *<p>Returns the oval shape</p>
     *<P>@return Oval</P>
     *<P>@param in the scanner of the file</P>
     *<P>has side effect</P>
     *<P>not referentially transparent</P>
     */
    private static Oval oval(Scanner in){
        int px = in.nextInt();
        int py = in.nextInt();
        int vx = in.nextInt();
        int vy = in.nextInt();
        boolean isFilled = in.nextBoolean();
        int width = in.nextInt();
        int height = in.nextInt();
        double r = in.nextDouble() / 255;
        double g = in.nextDouble() / 255;
        double b = in.nextDouble() / 255;
        int insertionTime = in.nextInt();
        Oval oval = new Oval(insertionTime, px, py, vx, vy, width, height, Color.color(r, g, b), isFilled);
        System.out.println(oval.toString());
        return oval;
    }
    /**
     *<p>Returns the square shape</p>
     *<P>@return Square</P>
     *<P>@param in the scanner of the file</P>
     *<P>has side effect</P>
     *<P>not referentially transparent</P>
     */
    private static Square square(Scanner in){
        int px = in.nextInt();
        int py = in.nextInt();
        int vx = in.nextInt();
        int vy = in.nextInt();
        boolean isFilled = in.nextBoolean();
        int size = in.nextInt();
        double r = in.nextDouble() / 255;
        double g = in.nextDouble() / 255;
        double b = in.nextDouble() / 255;
        int insertionTime = in.nextInt();
        Square square = new Square(insertionTime, px, py, vx, vy, size, Color.color(r, g, b), isFilled);
        System.out.println(square.toString());
        return square;
    }
    /**
     *<p>Returns the triangle shape</p>
     *<P>@return Square</P>
     *<P>@param in the scanner of the file</P>
     *<P>has side effect</P>
     *<P>not referentially transparent</P>
     */
    private static Triangle triangle(Scanner in){
        int px = in.nextInt();
        int py = in.nextInt();
        int vx = in.nextInt();
        int vy = in.nextInt();
        boolean isFilled = in.nextBoolean();
        int width = in.nextInt();
        int height = in.nextInt();
        double r = in.nextDouble() / 255;
        double g = in.nextDouble() / 255;
        double b = in.nextDouble() / 255;
        int insertionTime = in.nextInt();
        Triangle triangle = new Triangle(insertionTime, px, py, vx, vy, width, height, Color.color(r, g, b), isFilled);
        System.out.println(triangle.toString());
        return triangle;
    }

    /**
     *<p>Returns the rectangle shape</p>
     *<P>@return Rect</P>
     *<P>@param in the scanner of the file</P>
     *<P>has side effect</P>
     *<P>not referentially transparent</P>
     */
    private static Rect rect(Scanner in){
        int px = in.nextInt();
        int py = in.nextInt();
        int vx = in.nextInt();
        int vy = in.nextInt();
        boolean isFilled = in.nextBoolean();
        int width = in.nextInt();
        int height = in.nextInt();
        double r = in.nextDouble() / 255;
        double g = in.nextDouble() / 255;
        double b = in.nextDouble() / 255;
        int insertionTime = in.nextInt();
        Rect rect = new Rect(insertionTime, px, py, vx, vy, width, height, Color.color(r, g, b), isFilled);
        System.out.println(rect.toString());
        return rect;
    }

    /**
     * <P>Reads the data file used by the program and returns the constructed queue</p>
     * <P>@param in the scanner of the file</p>
     * <P>@return the queue represented by the data file</p>
     */
    private static Queue<ClosedShape> readDataFile(Scanner in) {
        Queue<ClosedShape> shapeQueue = new Queue<ClosedShape>();
        while (in.hasNextLine()) {
            String line = in.nextLine();
            Scanner lineScanner = new Scanner(line);

            String shape = lineScanner.next();
            if (shape.equals("circle")) {
                shapeQueue.enqueue(circle(lineScanner));
            } else if (shape.equals("oval")) {
                shapeQueue.enqueue(oval(lineScanner));
            } else if (shape.equals("square")) {
                shapeQueue.enqueue(square(lineScanner));
            } else if (shape.equals("rect")) {
                shapeQueue.enqueue(rect(lineScanner));
            }else if (shape.equals("triangle")){
                shapeQueue.enqueue(triangle(lineScanner));
            }
        }
        return shapeQueue;
    }

    /**
     * <P>Method to read the file and return a queue of shapes from this file. </P>
     * <P>@param filename the name of the file</P>
     * <P>@return the queue of shapes from the file</P>
     */
    public static Queue<ClosedShape> readDataFile(String filename) {
        File file = new File(filename);
        Scanner in = null;
        try {
            in = new Scanner(file);
            return ReadShapeFile.readDataFile(in);
        } catch (FileNotFoundException e) {
            System.err.println(e.getMessage());
            System.exit(1);
        } finally {
            if (in != null) {
                in.close();
            }
        }
        return null;
    }
}
