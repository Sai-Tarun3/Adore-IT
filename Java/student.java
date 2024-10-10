class student
{
	public static void main(String[]args)
	{
		int hno,eng,tel,sci,soc,mat;
	String sna;
	hno=101;	
	sna="tarun";
	eng=90;
	tel=75;
	sci=95;
	soc=80;
	mat=99;
	int tot=eng+tel+sci+soc+mat;
	float avg=tot/5;
	System.out.println("Total Marks =" +tot);
	System.out.println("Average Marks =" +avg);
	}
}