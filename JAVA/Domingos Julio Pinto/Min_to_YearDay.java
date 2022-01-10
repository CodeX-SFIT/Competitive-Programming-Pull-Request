import java.util.Scanner;
/*Conversion of minutes to years and days*/
public class Min_to_YearDay {

	public static void main(String[] args) {
		
		Scanner inp = new Scanner (System.in);
		System.out.println("Enter number of minutes");
		int min=inp.nextInt() ; /*Can input only till 9 digit minutes*/
		int year = min/(365*24*60);
		int day=(min/(24*60))%365;
		
		System.out.println("Number of years is "+year);
		System.out.println(" and number of days is " +day);
	    inp.close();
	}
	
}
