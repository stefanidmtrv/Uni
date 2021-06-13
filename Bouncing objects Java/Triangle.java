import javafx.scene.canvas.GraphicsContext;
import javafx.scene.paint.Color;

public class Triangle extends ClosedShape {
	// The width and height of the triangle (major and minor axis)
	private int width;
	private int height;

	/**
	 * <P>Creates a triangle </P>
	 * <P>@param insertionTime</P>
	 * <P>@param x The display component's x position</P>
	 * <P>@param y The display component's y position</P>
	 * <P>@param vx The display component's x velocity</P>
	 * <P>@param vy The display component's y velocity</P>
	 * <P>@param width</P>
	 * <P>@param height</P>
	 * <P>@param colour The line colour or fill colour.</P>
	 * <P>@param isFilled True if the square is filled with colour, false if opaque</P>
	 */
	public Triangle(int insertionTime, int x, int y, int vx, int vy, int width, int height, Color colour,
			boolean isFilled) {
		super(insertionTime, x, y, vx, vy, colour, isFilled);
		this.width = width;
		this.height = height;
	}

	/**
	 * <P>Method to convert a triangle to a string.</P>
	 * <P>@return String</P>
	 * <P>no side effects</P>
	 * <P>Referentially transparent</P>
	 */
	public String toString() {
		String result = "This is a triangle \n";
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
		double[] xPoints = { x + (width / 2), x, x + width };
		double[] yPoints = { y, y + height, y + height };
		g.setFill(colour);
		g.setStroke(colour);
		if (isFilled) {
			g.fillPolygon(xPoints, yPoints, 3);
		} else {
			g.strokePolygon(xPoints, yPoints, 3);
		}
	}

	/**
	 * <P>Get the height of the current component</P>
	 * <P>@return the width of the shape</P>
	 * <P>no side effects</P>
	 * <P>not referentially transparent</P>
	 */
	@Override
	public int getWidth() {
		return width;
	}

	/**
	 * <P>Get the height of the current component</P>
	 * <P>@return the height of the shape</P>
	 * <P>no side effects</P>
	 * <P>not referentially transparent</P>
	 */
	@Override
	public int getHeight() {
		return height;
	}

	/**
	 * <P>Set the height of the current component</P>
	 * <P>@param width</P>
	 * <P>has side effects</P>
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
