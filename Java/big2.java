import java.util.*;
class big2
{
	public static void mani(String...args)	
	{
	Scanner sc=new Scanner(System.in);
	System.out.print("Any Value");
	int a=sc.nextInt();
	int b=sc.nextInt();
	int c=sc.nextInt();
	  if((a>b)&&(a>c))
	       {
	         System.out.println("A is big");
	        }
	else
	 if(b>c)
	     {
	       System.out.println("B is big");
	      }
	else
	{
	System.out.println("C is big");
	}
            }
}
	