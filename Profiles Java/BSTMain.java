/**
 * <P>BSTMain.java</P>
 * <p>@version 1.0</p>
 * <p>creation 4.2.2020</p>
 * <p>last modification 4.26.2020</p>
 * <p>@author Stefani Dimitrova</P>
 * <p>no copyright</p>
 * <p>purpose testing the BST class</p>
 * <p>no version history<p>
 */
public class BSTMain {

	public static void main(String[] args) {
		
	BST tree = new BST();
		tree.insertProfile(new Profile("Emilova", "Stefani", 31, 7, 2000, "dimitrovastefani@gmail.com", 
			new String[] { "swimming", "gym", "running" }, new String[] { "cooking", "Sports Society"} ));
		tree.insertProfile(new Profile("Samuilova", "Emiliya", 3, 1, 2000, "emiliyas@gmail.com",
				new String[] { "handball training", "dancing" }, new String[] { "Hiking", "Tree Society" }));
		tree.insertProfile(new Profile("Lazarova", "Elena", 16, 9, 2000, "elenaa@gmail.com", 
				new String[] {"Fashion", "Writing"} , new String[] {"Fashion Club", "Writing Society"}));
		
		tree.inOrder();
		
	}

}