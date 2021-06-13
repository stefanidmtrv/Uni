/**
 * <P>ProfileMain.java</P>
 * <p>@version 1.0</p>
 * <p>creation 4.1.2020</p>
 * <p>last modification 4.26.2020</p>
 * <p>@author Stefani Dimitrova</P>
 * <p>no copyright</p>
 * <p>purpose testing the profile class</p>
 * <p>no version history<p>
 */
public class ProfileMain {
	public static void main(String[] args) {

		Profile profile1 = new Profile("Emilova", "Stefani", 31, 7, 2000, "dimitrovastefani@gmail.com",
				new String[] { "swimming", "gym", "running" }, new String[] { "Cooking", "Sports Society" });

		Profile profile2 = new Profile("Samuilova", "Emiliya", 3, 1, 2000, "emiliyas@gmail.com",
				new String[] { "handball", "dancing" }, new String[] { "Hiking", "Tree Society" });

		System.out.println(profile1.getFirstName());
		System.out.println(profile1.getLastName());
		System.out.println(profile1.getDayOfBirth());
		System.out.println(profile1.getMonthOfBirth());
		System.out.println(profile1.getYearOfBirth());
		System.out.println(profile1.getEmailAddress());

		profile1.addFriend(profile2);
		System.out.println(profile1.getFriend(0).toString());
		System.out.println(profile1.numOfFriends());
		System.out.println(profile1.toString());
		System.out.println(profile2.toString());

	}
}
