/**
 * <P>BSTNode.java</P>
 * <p>@version 1.0</p>
 * <p>creation 4.2.2020</p>
 * <p>last modification 4.26.2020</p>
 * <p>@author Stefani Dimitrova</P>
 * <p> no copyright</p>
 * <p> purpose experiment on nodes in binary trees </p>
 * <p> no version history<p>
 */
public class BSTNode{
    //The profile's information and the left and the right node
	private Profile data;
	private BSTNode l;
	private BSTNode r;
	
	/**
	 * <P>Initializes empty nodes</P>
	 * <P>no side effects</P>
	 * <P>not referentially transparent</P>
	 * 
	 */
	public BSTNode(Profile data) {
		
		this.data = data;
		l = null;
		r = null;
	}
	/**
	 * <P>method to get the profile</P>
	 * <P>@return Profile</P>
	 * <P>not referentially transparent</P>
	 * <P>no side effects</P>
	 */
	public Profile getProfile() {
		return this.data;
	}
	/**
	 * <P>method to set the left node</P>
	 * <P>@param l</P>
	 * <P>has side effect</P>
	 */
	public void setL(BSTNode l) {
		this.l = l;
	}
	/**
	 * <P>method to set the right node</P>
	 * <P>@param r</P>
	 * <P>has side effect</P>
	 */
	public void setR(BSTNode r) {
		this.r = r;
	}
	/**
	 * <P>method to get the left node</P>
	 * <P>@return BSTNode</P>
	 * <P>not referentially transparent</P>
	 * <P>no side effects</P>
	 */
	public BSTNode getL() {
		return this.l;
	}
	/**
	 * <P>method to get the right node</P>
	 * <P>@return BSTNode</P>
	 * <P>not referentially transparent</P>
	 * <P>no side effects</P>
	 */
	public BSTNode getR() {
		return this.r;
	}
	
}
