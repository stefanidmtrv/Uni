/**
 * <P> FileReader.java</p>
 * <P> @version 1.0</p>
 * <P> creation 4.4.2020</P>
 * <P> last modification 4.26.2020</p>
 * <P> @author Stefani Dimitrova</p>
 * <P> no copyright</p>
 * <P> purpose Reading the text file and populating the tree</p>
 */

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class FileReader {

	/**
	 * <P>method to read a file</P>
	 * <P>@param filename</P>
	 */
	public static BST readProfileSet(String filename) {

		File file = new File(filename);
		Scanner fileScan = null;
		try {
			fileScan = new Scanner(file);
			readProfileSet(fileScan);
		} catch (FileNotFoundException e) {
			System.err.println(e.getMessage());
			System.exit(1);
		}
		return readProfileSet(fileScan);
	}
	/**
	 * <P>method to create a profile from a line</P>
	 * <P>@param fileScan</P>
	 * <P>has side effect</P>
     * <P>not referentially transparent</P>
	 */
	private static BST profileCreate(Scanner fileScan) {

		BST tree = new BST();
		while (fileScan.hasNextLine()) {
			String line = fileScan.nextLine();
			Scanner lines = new Scanner(line);

			lines.useDelimiter(",");

			String lastName = lines.next();
			String firstName = lines.next();
			int day = lines.nextInt();
			int month = lines.nextInt();
			int year = lines.nextInt();
			String email = lines.next();

			String interests = lines.next();
			String[] arrayInterests = interests.split(";");

			String activities = lines.next();
			String[] arrayActivities = activities.split(";");

			Profile profile = new Profile(lastName, firstName, day, month, year, email, arrayInterests,
					arrayActivities);

			tree.insertProfile(profile);
			// System.out.println(profile.toString());
			lines.close();

		}
		printAlphabetical(tree);
		return tree;
	}
	/**
	 * <P>method to read a profile</P>
	 * <P>@param fileScan</P>
	 * <P>@return BST</P>
	 */
	private static BST readProfileSet(Scanner fileScan) {
		return profileCreate(fileScan);
	}
	/**
	 * <P>method to print the profiles in alphabetical order</P>
	 * <P>@param tree</P>
	 */
	public static void printAlphabetical(BST tree) {
		tree.inOrder();
	}

}
