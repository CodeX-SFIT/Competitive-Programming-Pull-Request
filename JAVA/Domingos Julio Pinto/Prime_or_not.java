import java.util.Scanner;

public class Prime_or_not {

	public static void main(String args[]){    
		  int i,m=0,nprime=0; 
		  System.out.println("Enter number : ");
		  Scanner inp = new Scanner (System.in);
		  int n= inp.nextInt();    
		  m=n/2;      
		  if(n==0||n==1){  
		   System.out.println(n+" is not prime number");      
		  }else{  
		   for(i=2;i<=m;i++){      
		    if(n%i==0){      
		     System.out.println(n+" is not prime number");      
		     nprime=1;      
		     break;      
		    }      
		   }      
		   if(nprime==0)  { System.out.println(n+" is prime number"); }  
		  } 
		  inp.close();
		}    
		}   