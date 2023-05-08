import java.util.Scanner;
public class EvenOrOdd{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter a:");
		int a = sc.nextInt();
		System.out.print("Enter b:");
		int b = sc.nextInt();
		System.out.print("Enter c:");
		int c = sc.nextInt();
		if(a%2 == 0)
			System.out.println(a + " is even");
		else
			System.out.println(a + " is odd");
		if(b%2 == 0)
			System.out.println(b + " is even");
		else
			System.out.println(b + " is odd");
		if(c%2 == 0)
			System.out.println(c + " is even");
		else
			System.out.println(c + " is odd");
	}
}