/**
 * <P>Profile.java</P>
 * <p>@version 1.0</p>
 * <p>creation 4.1.2020</p>
 * <p>last modification 4.26.2020</p>
 * <p>@author Stefani Dimitrova</P>
 * <p>no copyright</p>
 * <p>purpose creating a profile</p>
 * <p>no version history<p>
 */
import java.util.ArrayList;

public class Profile {
	//A profile's information
	private String lastName;
	private String firstName;
	private int dayOfBirth;
	private int monthOfBirth;
	private int yearOfBirth;
	private String emailAddress;
	private String[] interests;
	private String[] activitiesAndGroups;
	private ArrayList<Profile> friends = new ArrayList<Profile>();
	/**
	 * <P>Creates a profile </P>
	 * <P>@param lastName</P>
	 * <P>@param firstName</P>
	 * <P>@param dayOfBirth</P>
	 * <P>@param monthOfBirth</P>
	 * <P>@param yearOfBirth</P>
	 * <P>@param emailAddress</P>
	 * <P>@param interests</P>
	 * <P>@param activitiesAndGroups</P>
	 */
	public Profile(String lastName, String firstName, int dayOfBirth, int monthOfBirth, int yearOfBirth,
			String emailAddress, String[] interests, String[] activitiesAndGroups) {
		this.lastName = lastName;
		this.firstName = firstName;
		this.dayOfBirth = dayOfBirth;
		this.monthOfBirth = monthOfBirth;
		this.yearOfBirth = yearOfBirth;
		this.emailAddress = emailAddress;
		this.interests = interests;
		this.activitiesAndGroups = activitiesAndGroups;

	}
	/**
     *<P>Method to get the last name of the profile</P>
     *<P> @return The last name.</P>
     *<P>not referentially transparent</P>
	 *<P>no side effects</P>
     */
	public String getLastName() {
		return lastName;
	}
	/**
     *<P>Sets the last name</P>
     *<P>@param lastName</P>
     *<P>has side effect</P>
     */
	public void setLastName(String lastName) {
		this.lastName = lastName;
	}
	/**
	 *<P>Method to get the firs name of the profile</P>
     *<P> @return The first name.</P>
     *<P>not referentially transparent</P>
	 *<P>no side effects</P>
     */
	public String getFirstName() {
		return firstName;
	}
	/**
     *<P>Sets the first name</P>
     *<P>@param firstName</P>
     *<P>has side effect</P>
     */
	public void setFirstName(String firstName) {
		this.firstName = firstName;
	}
	/**
	 *<P>Method to get the day of birth of the profile</P>
     *<P> @return The day of birth.</P>
     *<P>not referentially transparent</P>
	 *<P>no side effects</P>
     */
	public int getDayOfBirth() {
		return dayOfBirth;
	}
	/**
     *<P>Sets the day of birth</P>
     *<P>@param dayOfBirth</P>
     *<P>has side effect</P>
     */
	public void setDayOfBirth(int dayOfBirth) {
		this.dayOfBirth = dayOfBirth;
	}
	/**
	 *<P>Method to get the month of birth of the profile</P>
     *<P> @return The month of birth.</P>
     *<P>not referentially transparent</P>
	 * <P>no side effects</P>
     */
	public int getMonthOfBirth() {
		return monthOfBirth;
	}
	/**
     *<P>Sets the month of birth</P>
     *<P>@param monthOfBirth</P>
     *<P>has side effect</P>
     */
	public void setMonthOfBirth(int monthOfBirth) {
		this.monthOfBirth = monthOfBirth;
	}
	/**
	 *<P>Method to get the year of birth of the profile</P>
     *<P> @return The year of birth.</P>
     *<P>not referentially transparent</P>
	 *<P>no side effects</P>
     */
	public int getYearOfBirth() {
		return yearOfBirth;
	}
	/**
     *<P>Sets the year of birth</P>
     *<P>@param yearOfBirth</P>
     *<P>has side effect</P>
     */
	public void setYearOfBirth(int yearOfBirth) {
		this.yearOfBirth = yearOfBirth;
	}
	/**
	 *<P>Method to get the email address of the profile</P>
     *<P> @return The email address.</P>
     *<P>not referentially transparent</P>
	 *<P>no side effects</P>
     */
	public String getEmailAddress() {
		return emailAddress;
	}
	/**
     *<P>Sets the emailAddress</P>
     *<P>@param emailAddress</P>
     *<P>has side effect</P>
     */
	public void setEmailAddress(String emailAddress) {
		this.emailAddress = emailAddress;
	}
	/**
	 *<P>Method to get the interests of the profile</P>
     *<P> @return The interests.</P>
     *<P>not referentially transparent</P>
	 *<P>no side effects</P>
     */
	public String[] getInterests() {
		return interests;
	}
	/**
     *<P>Sets the interests</P>
     *<P>@param interests</P>
     *<P>has side effect</P>
     */
	public void setInterests(String[] interests) {
		this.interests = interests;
	}
	/**
	 *<P>Method to get the activities of the profile</P>
     *<P> @return The activities and groups.</P>
     *<P>not referentially transparent</P>
	 *<P>no side effects</P>
     */
	public String[] getActivitiesAndGroups() {
		return activitiesAndGroups;
	}
	/**
     *<P>Sets the activities and groups</P>
     *<P>@param activitiesAndGroups</P>
     *<P>has side effect</P>
     */
	public void setActivities(String[] activitiesAndGroups) {
		this.activitiesAndGroups = activitiesAndGroups;
	}
	/**
	 * <P>Method to get the date of birth of the profile</P>
     *<P> @return The date of birth.</P>
     *<P>not referentially transparent</P>
	 *<P>no side effects</P>
     */
	public String getDateOfBirth() {
		String formatted = monthOfBirth + "/" + dayOfBirth + "/" + yearOfBirth;
		return formatted;
	}
	/**
     *<P>Adds a friend to the list</P>
     *<P>@param p</P>
     */
	public void addFriend(Profile p) {
		friends.add(p);
	}
	/**
	 *<P>Method to get the friend of the profile</P>
     *<P> @return The friend.</P>
     *<P>not referentially transparent</P>
	 *<P>no side effects</P>
     */
	public Profile getFriend(int i) {
		return friends.get(i);
	}
	/**
	 *<P>Method to get the number of friends of the profile</P>
     *<P> @return The number of friends.</P>
     *<P>not referentially transparent</P>
	 *<P>no side effects</P>
     */
	public int numOfFriends() {
		return friends.size();
	}
	/**
	 * The method returns a string of the profile
	 * @return string to print out the profile
	 */
	public String toString() {
		String profileString = "";
		profileString += "Last Name: " + this.lastName + "\n";
		profileString += "Name: " + this.firstName + "\n";
		profileString += "Date of birth: " + this.getDateOfBirth() + "\n";
		profileString += "Email Address: " + this.emailAddress + "\n";

		profileString += "Interests: ";
		
		for (String elem : this.interests) {
			profileString += elem + "; " ;
		}
		profileString += "\n";

		profileString += "Groups: ";
		for (String elem : this.activitiesAndGroups) {
			profileString += elem + "; " ;
		}
		profileString += "\n";
		
		return profileString;
	}
}
