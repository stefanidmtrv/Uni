
/**
 * ClosedShape.java
 * @version 2.0.0
 * Originally written by Bette Bultena but heavily modified for the purposes of 
 * CSC-115 (Daniel Archambault and Liam O'Reilly)
 */

import javafx.scene.paint.Color;
import javafx.scene.canvas.GraphicsContext;

/**
 * A ClosedShape is any shape that can be drawn without
 * taking a pencil off a piece of paper.
 * It's representation on computer has a line colour
 * and a position on the drawable screen component.
 * It can be filled in with colour or opaque.
 * This class is a super class for all shapes.
 */

public abstract class ClosedShape {

    /**
     *  The x position of the Shape.
     */
    protected int x;
    /**
     * The y position of the Shape.
     */
    protected int y;

    /**
     *  The x position of the Shape.
     */
    protected int xVec;

    /**
     * The y position of the Shape.
     */
    protected int yVec;

    /**
     * The line colour of the shape, or the filled in
     * colour if the Shape has fill.
     */
    protected Color colour;

    /**
     * Determines if the Shape has a fill colour or not.
     */
    protected boolean isFilled;

    /**
     * Encodes the insertion time into the scene
     */
    private int insertionTime;
    
    /**
	 * Creates a closed shape object.
	 * @param x The x position.
	 * @param y the y position.
	 * @param colour The line or fill colour.
	 * @param isFilled True if the shape is filled, false if not.
	 */
    protected ClosedShape (int insertionTime, int x, int y, int vx, int vy, Color colour, boolean isFilled) {
        this.x = x;
        this.y = y;
        this.xVec = vx;
        this.yVec = vy;
        this.colour = colour;
        this.isFilled = isFilled;
        this.insertionTime = insertionTime;
    }

	/**
	 * The method returns a string suitable for printing.
	 * @return string to print out shape.
	 */
    public String toString () {
        String result = "";
        result += "Its position is " + x + " " + y + "\n";
        result += "Its velocity is " + xVec + " " + yVec + "\n";
        result += "Its colour is " + colour + "\n";
        if (isFilled)
            result += "It is filled" + "\n";
        else
            result += "It is not filled" + "\n";
        result += "It should be inserted at " + insertionTime + "\n";
        return result;
    }

    /**
     * <P>Resets the x position.</P>
     */
    public void setX (int x) {
        this.x = x;
    }

    /**
     * <P>Resets the y position.</P>
     */
    public void setY (int y) {
        this.y = y;
    }

    /**
     * <P>Resets the x vector.</P>
     */
    public void setVecX (int x) {
        this.xVec = x;
    }//end setVecX

    /**
     * <P>Resets the y position.</P>
     */
    public void setVecY (int y) {
        this.yVec = y;
    }//end setVecY

    /**
     *<P>Resets the colour.</P>
     */
    public void setColour (Color colour) {
        this.colour = colour;
    }

    /**
     *<P>Sets the shape to filled.</P>
     */
    public void setFilled () {
        isFilled = true;
    }

    /**
     * <P>Sets the shape to unfilled.</P>
     */
    public void unsetFilled () {
        isFilled = false;
    }

    /**
     *<P>Sets the insertion time.</P>
     */
    public void setInsertionTime (int time) {
        insertionTime = time;
    }

    /**
     *<P>@return The x position value.</P>
     */
    public int getX() {
        return x;
    }

    /**
     *<P>@return The y position value.</P>
     */
    public int getY() {
        return y;
    }

    /**
     *<P> @return The colour.</P>
     */
    public Color getColour() {
        return colour;
    }

    /**
     * <P>@return True if the shape is filled, false if not.</P>
     */
    public boolean isFilled() {
        return isFilled;
    }

    /**
     * <P>@return the insertion time.</P>
     */
    public int getInsertionTime () {
        return insertionTime;
    }

    /**
     * <P>Puts the shape back in bounds in X</P>
     */
    public void putInBoundsX (double winX) {
        if (x < 0) x = 0;
        if (x + this.getWidth() > winX) {
            x = (int) (winX - Math.ceil (this.getWidth ()));
        }
    }//end inBoundsX;

    /**
     *<P> Puts the shape back in bounds</P>
     */
    public void putInBoundsY (double winY) {
        if (y < 0) y = 0;
        if (y + this.getHeight() > winY) {
            y = (int) (winY - Math.ceil (this.getHeight ()));
        }
    }//end inBoundsY;

    /**
     * <P>Bounces the shape off a vertical wall</P>
     */
    public void bounceX () {
        xVec = -xVec;
    }

    /**
     *<P> Bounces the shape off a horizontal wall</P>
     */
    public void bounceY () {
        yVec = -yVec;
    }

    /**
     * <P>Returns true if the shapes have gone out of bounds in X</P>
     */
    public boolean outOfBoundsX (double winX) {
        return (x + this.getWidth()> winX) || (x < 0);
    }

    /**
     * <P>Returns true if the shapes have gone out of bounds in Y</P>
     */
    public boolean outOfBoundsY (double winY) {
        return (y + this.getHeight() > winY) || (y < 0);
    }

    /**
     *<P> Takes in a direction and a velocity and moves the shape
     * in that direction on unit</P>
     */
    public void move () {
        x += xVec;
        y += yVec;
    }

    /**
     * <P>Draws the object to the current component.  Abstract method.</P>
     * <P>@param g The graphics object associated with the drawing component.</P>
     */
    public abstract void draw (GraphicsContext g);

    /**
     * <P>Get the width of the current component</P>
     * <P>@return the width of the shape</P>
     */
    public abstract int getWidth ();

    /**
     * <P>Get the height of the current component</P>
     * <P>@return the height of the shape</P>
     */
    public abstract int getHeight ();
}