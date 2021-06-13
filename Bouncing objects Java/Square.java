
/**
 * <P>-Square.java</p>
 * <P> @version 2.0</p>
 * <P> creation 22/02/2020</p>
 * <P> last modification 04/03/2020</p>
 * <P> @author Stefani</p>
 * <P>- no copyright</p>
 * <P>- purpose creating a square </p>
 * <P>- Originally written by Bette Bultena but heavily modified for the purposes of CS-115 by Daniel Archambault and Liam O'Reilly</p>
 */

import javafx.scene.paint.Color;
import javafx.scene.canvas.GraphicsContext;

public class Square extends ClosedShape {
	// The size of the square
	private int size;

	/**
	 * <P>Creates a square </P>
	 * <P>@param insertionTime</P>
	 * <P>@param x The display component's x position</P>
	 * <P>@param y The display component's y position</P>
	 * <P>@param vx The display component's x velocity</P>
	 * <P>@param vy The display component's y velocity</P>
	 * <P>@param size</P>
	 * <P>@param colour The line colour or fill colour.</P>
	 * <P>@param isFilled True if the square is filled with colour, false if opaque</P>
	 */
	public Square(int insertionTime, int x, int y, int vx, int vy, int size, Color colour, boolean isFilled) {
		super(insertionTime, x, y, vx, vy, colour, isFilled);
		this.size = size;

	}

	/**
	 * <P>Method to convert a square to a string.</P>
	 * <P>@return String</P>
	 * <P>no side effects</P>
	 * <P>Referentially transparent</P>
	 */
	public String toString() {
		String result = "This is a square\n";
		result += super.toString();
		result += "Its size is " + this.size + "\n";
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
			g.fillRect(x, y, size, size);
		} else {
			g.strokeRect(x, y, size, size);
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
		return size;
	}

	/**
	 * <P>Get the height of the current component</P>
	 * <P>@return the height of the shape</P>
	 * <P>not referentially transparent</P>
	 * <P>no side effects</P>
	 */
	@Override
	public int getHeight() {
		return size;
	}

	/**
	 * <P>Set the width of the current component</P>
	 * <P>@param size</P>
	 * <P>has side effect</P>
	 */
	public void setSize(int size) {
		this.size = size;
	}

}
