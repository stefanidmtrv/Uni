/**
 * <P>BSTNodeMain.java</P>
 * <p>@version 1.0</p>
 * <p>creation 4.2.2020</p>
 * <p>last modification 4.26.2020</p>
 * <p>@author Stefani Dimitrova</P>
 * <p>no copyright</p>
 * <p>purpose testing the BSTNode class</p>
 * <p>no version history<p>
 */
public class BSTNodeMain{

	public static void main(String[] args) {
		
		BSTNode node1 = new BSTNode(new Profile("Emilova", "Stefani", 31, 7, 2000, "dimitrovastefani@gmail.com", 
				new String[] { "swimming", "gym", "running" }, new String[] { "cooking", "Sports Society"} ));
		BSTNode node2 = new BSTNode(new Profile("Lazarova", "Elena", 16, 9, 2000, "elenaa@gmail.com", 
				new String[] {"Fashion", "Writing"} , new String[] {"Fashion Club", "Writing Society"}));
		BSTNode node3 = new BSTNode(new Profile("Samuilova", "Emiliya", 3, 1, 2000, "emiliyas@gmail.com",
				new String[] { "handball training", "dancing" }, new String[] { "Hiking", "Tree Society" }));
	
		node1.setL(node2);
		node1.setR(node3);
		
		System.out.println(node1.getProfile());
		System.out.println(node1.getL().getProfile());
		System.out.println(node1.getR().getProfile());
		
	}

}
