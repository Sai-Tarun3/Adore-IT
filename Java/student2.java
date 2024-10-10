import java.util.*;

class Student2 {
    public static void main(String... args) {
        Scanner sc = new Scanner(System.in);
        
        // Input details
        System.out.println("Hallticket number");
        int hno = sc.nextInt();
        
        sc.nextLine(); // Consume the newline character after the int input
        
        System.out.print("Student Name: ");
        String sna = sc.nextLine(); // Use nextLine to read the full name with spaces
        
        // Input marks
        System.out.print("English: ");
        int eng = sc.nextInt();
        
        System.out.print("Telugu: ");
        int tel = sc.nextInt();
        
        System.out.print("Science: ");
        int sci = sc.nextInt();
        
        System.out.print("Soc: ");
        int soc = sc.nextInt();
        
        System.out.print("Maths: ");
        int mat = sc.nextInt();
        
        // Calculate total and average
        int tot = eng + tel + sci + soc + mat;
        double avg1 = tot / 5.0; // Cast one operand to double for correct division
        
        // Print total and average
        System.out.println("Total marks = " + tot);
        System.out.println("Average marks = " + avg1);
        
        // Determine and print result
        if (eng >= 35 && tel >= 35 && sci >= 35 && soc >= 35 && mat >= 35) {
            System.out.println("Result = Pass");
            
            // Determine and print grade
            if (avg1 >= 90) {
                System.out.println("Grade = A+");
            } else if (avg1 >= 70) {
                System.out.println("Grade = A");
            } else if (avg1 >= 50) {
                System.out.println("Grade = B");
            } else if (avg1 >= 35) {
                System.out.println("Grade = C");
            }
        } else {
            System.out.println("Result = Fail");
        }
    }
}
