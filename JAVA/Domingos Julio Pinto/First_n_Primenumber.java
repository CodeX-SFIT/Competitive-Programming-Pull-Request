import java.util.Scanner;
/*Program to print first n prime numbers*/
public class First_n_Primenumber {

	public static void main(String[] args) {

			int t=0,n=0,i=1,j=1;  
			Scanner inp = new Scanner (System.in);
			
			System.out.println("Enter the number of prime numbers you want");
			
			int num=inp.nextInt() ;
			System.out.println("");
			while(n<num)  
			{  
			j=1;  
			t=0;  
			while(j<=i)  
			{  
			if(i%j==0)  
			t++;  
			j++;   
			}  
			if(t==2)  
			{  
			System.out.println(+i);  
			n++;  
			}  
			i++;  
			}  
			   inp.close();
	}  

}
