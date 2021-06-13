
/**
 * <P>-Rect.java</p>
 * <P> @version 2.0</p>
 * <P> creation 22/02/2020</p>
 * <P> last modification 04/03/2020</p>
 * <P> @author Stefani</p>
 * <P>- no copyright</p>
 * <P>- purpose creating a rectangle </p>
 * <P>- Originally written by Bette Bultena but heavily modified for the purposes of CS-115 by Daniel Archambault and Liam O'Reilly</p>
 */

import java.io.*;

import javafx.scene.paint.Color;
import javafx.scene.canvas.GraphicsContext;

public class Rect extends ClosedShape {
	// The width and height of the rectangle
	private int width, height;

	/**
	 * <P>Creates a rectangle </P>
	 * <P>@param insertionTime</P>
	 * <P>@param x The display component's x position</P>
	 * <P>@param y The display component's y position</P>
	 * <P>@param vx The display component's x velocity</P>
	 * <P>@param vy The display component's y velocity</P>
	 * <P>@param size</P>
	 * <P>@param colour The line colour or fill colour.</P>
	 * <P>@param isFilled True if the square is filled with colour, false if opaque</P>
	 */
	public Rect(int insertionTime, int x, int y, int vx, int vy, int width, int height, Color colour,
			boolean isFilled) {
		super(insertionTime, x, y, vx, vy, colour, isFilled);
		this.width = width;
		this.height = height;

	}

	/**
	 * <P>Method to convert a rectangle to a string.</P>
	 * <P>@return String</P>
	 * <P>no side effects</P>
	 * <P>Referentially transparent</P>
	 */
	public String toString() {
		String result = "This is a rectangle \n";
		result += super.toString();
		result += "Its width is " + this.width + " and its height is " + this.height + "\n";
		return result;
	}

	/**
	 * <P>Draws the object to the current component. Abstract method.</P>
	 * <P>@param g The graphics object associated with the drawing component.</P>
	 * <P>no side effects</P>
	 */
	@Override
	public void draw(GraphicsContext g) {
		g.setFill(colour);
		g.setStroke(colour);
		if (isFilled) {
			g.fillRect(x, y, width, height);
		} else {
			g.strokeRect(x, y, width, height);
		}
	}

	/**
	 * <P>Get the width of the current component</P>
	 * <P>@return the width of the shape</P>
	 * <P>not referentially transparent</P>
	 * <P>no side effects</P>
	 */
	@Override
	public int getWidth() {
		return width;
	}

	/**
	 * <P> Get the height of the current component</P>
	 * <P>@return the height of the shape</P>
	 * <P>not referentially transparent</P>
	 * <P>no side effects</P>
	 */
	@Override
	public int getHeight() {
		return height;
	}

	/**
	 * <P>Set the width of the current component</P>
	 * <P>@param width</P>
	 * <P>has side effect</P>
	 */
	public void setWidth(int width) {
		this.width = width;
	}

	/**
	 * <P>Set the height of the current component</P>
	 * <P>@param height</P>
	 * <P>has side effects</P>
	 */
	public void setHeight(int height) {
		this.height = height;
	}
}
