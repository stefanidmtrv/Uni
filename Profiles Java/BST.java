/**
 * <P>BST.java</P>
 * <p>@version 1.0</p>
 * <p>creation 4.2.2020</p>
 * <p>last modification 4.26.2020</p>
 * <p>@author Stefani Dimitrova</P>
 * <p> no copyright</p>
 * <p> purpose binary searching </p>
 * <p> no version history<p>
 */
public class BST {
	
	private BSTNode root;//The root of the tree
	/**
	 * Constructing the tree
	 */
	public BST() {
		this.root = null;
	}
	/**
	 * <P>method to insert a profile</P>
	 * <P>@param p</P>
	 * <P>no side effect</P>
	 * <P>referentially transparent</P>
	 */
	public void insertProfile(Profile p) {
		BSTNode node = new BSTNode(p);
		if (this.root == null) {
			root = node;
		} else {
			recursive(node, root);
		}
	}
	/**
	 * <P>method to call either getL or getR depending on the name of the profile </P>
	 * <P>@param newNode</P>
	 * <P>@param rootN</P>
	 * <P>has side effect</P>
	 * <P>referentially transparent</P>
	 */
	private void recursive(BSTNode newNode, BSTNode rootN) {

		int comp = newNode.getProfile().getLastName().compareTo(rootN.getProfile().getLastName());

		if (comp > 0) {
			if (rootN.getR() == null) {
				rootN.setR(newNode);
			} else {
				recursive(newNode, rootN.getR());
			}
		} else if (comp <= 0) {
			if (rootN.getL() == null) {
				rootN.setL(newNode);
			} else {
				recursive(newNode, rootN.getL());
			}

		}
	}
	/**
	 * <P>method to sets the nodes in alphabetical order</P>
	 * <P>@param n</P>
	 * <P>has side effect</P>
	 * <P>referentially transparent</P>
	 */
	public void inOrder(BSTNode n) {
		if (n == null) {
			return;
		}
		if (n.getL() != null) {
			inOrder(n.getL());
		}
		System.out.println(n.getProfile().toString());

		if (n.getR() != null) {
			inOrder(n.getR());
		}

	}
	
	public void inOrder() {
		inOrder(root);
	}

}
