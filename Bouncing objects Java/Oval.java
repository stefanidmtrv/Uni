
/**
 * Oval.java
 * @version 2.0.0
 * Originally written by Bette Bultena but heavily modified for the purposes of 
 * CSC-115 (Daniel Archambault and Liam O'Reilly)
 */

import javafx.scene.paint.Color;
import javafx.scene.canvas.GraphicsContext;

/**
 *
 * Oval is an oval shape that can be drawn to the screen, either
 * filled with colour or opaque.
 * Its position is determined by the upper left corner of the
 * oval's bounding rectangle
 */
public class Oval extends ClosedShape {
    //The width and height of the oval (major and minor axis)
    private int width, height;

    /**
     * <P>Creates an oval.</P>
     * <P>@param x The display component's x position.</P>
     * <P>@param y The display component's y position.</P>
     * <P>@param vx The display component's x velocity.</P>
     * <P>@param vy The display component's y velocity.</P>
     * <P>@param width The width of the oval (in pixels).</P>
     * <P>@param height The height of the oval (in pixels).</P>
     * <P>@param colour The line colour or fill colour.</P>
     * <P>@param isFilled True if the oval is filled with colour, false if opaque.</P>
     */
    public Oval (int insertionTime, int x, int y, int vx, int vy, int width, int height, Color colour, boolean isFilled) {
        super (insertionTime, x, y, vx, vy, colour, isFilled);
        this.width = width;
        this.height = height;
    }

    /**
     * Method to convert an oval to a string.
     */
    public String toString () {
        String result = "This is an oval\n";
        result += super.toString ();
        result += "Its width is " + this.width + " and its height is " + this.height + "\n";
        return result;
    }


    /**
	 * @param width Resets the width.
	 */
    public void setWidth (int width) {
        this.width = width;
    }

	/**
 	 * @param height Resets the height.
 	 */
    public void setHeight (int height) {
        this.height = height;
    }
    
    /**
 	 * @return The width of the oval.
 	 */
    public int getWidth() {
        return width;
    }

    /**
 	 * @return The height of the oval.
 	 */
    public int getHeight() {
        return height;
    }

	/**
 	 * Draw the oval.
 	 * @param g The graphics object of the drawable component.
 	 */
    public void draw (GraphicsContext g) {
        g.setFill (colour);
        g.setStroke( colour );
        if (isFilled) {
            g.fillOval( x, y, width, height );
        }
        else {
            g.strokeOval( x, y, width, height );
        }
    }
}
