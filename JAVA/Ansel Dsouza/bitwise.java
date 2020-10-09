import java.util.Scanner;
class bitwise
{
    public static void main(String args[])
    {
	 int c=0;
	 Scanner sc=new Scanner(System.in);
	 System.out.print("Enter two numbers:");
	 int a=sc.nextInt();
	 int b=sc.nextInt();
	 System.out.print("\n\nSelect your choice:\n1.AND\t2.OR\n3.XOR\t4.NOT\n5.Shift LEFT\t6.Shift RIGHT");
	 System.out.println("\nYour choice:");
	 int op=sc.nextInt();
	 switch(op)
	 {
		case 1:
			c=a&b;
			break;
		case 2:
			c=a|b;
			break;
		case 3:
			c=a^b;
			break;
		case 4:
			c=~a;
			break;
		case 5:
			c=a>>2;
			break;
		case 6:
			c=a<<2;
			break;
		default:
			System.out.print("\nInvalid operation");
			break;
	}
	System.out.print("\n\nResult:"+c);
    }
}