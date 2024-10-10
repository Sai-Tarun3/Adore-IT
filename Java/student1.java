import java.util.*;
class student1
{
	public static void main(String[]args)
	{
	Scanner sc=new Scanner(System.in);
	System.out.print("HallTicket number");
	int hno=sc.nextInt();
	System.out.print("student name");
	String sna=sc.next();
	System.out.print("English");
	int eng=sc.nextInt();
	System.out.print("Telugu");
	int tel=sc.nextInt();
	System.out.print("Science");
	int sci=sc.nextInt();
	System.out.print("Social");
	int soc=sc.nextInt();
	System.out.print("Maths");
	int mat=sc.nextInt();
	int tot=eng+tel+sci+soc+mat;
	double avg1=tot/5;
	System.out.println("total  marks"+tot);
	System.out.println("avg  marks"+avg1);
	}
}