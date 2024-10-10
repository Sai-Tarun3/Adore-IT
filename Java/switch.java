import java.util.*;

class Switch1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        // Input a value
        System.out.println("Enter a number (1-7) to get the corresponding day of the week:");
        int n = sc.nextInt();
        
        // Switch statement to determine the day based on input
        switch (n) {
            case 1:
                System.out.println("Sunday");
                break;
            case 2:
                System.out.println("Monday");
                break;
            case 3:
                System.out.println("Tuesday");
                break;
            case 4:
                System.out.println("Wednesday");
                break;
            case 5:
                System.out.println("Thursday");
                break;
            case 6:
                System.out.println("Friday");
                break;
            case 7:
                System.out.println("Saturday");
                break;
            default:
                System.out.println("Out of range. Please enter a number between 1 and 7.");
        }
    }
}
