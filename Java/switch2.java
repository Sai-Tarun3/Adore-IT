import java.util.*;

class switch2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Input month abbreviation
        System.out.println("Enter month abbreviation (e.g., jan, feb): ");
        String n = sc.next().toLowerCase();  // Convert input to lowercase to make it case-insensitive

        // Switch statement to determine the number of days in the month
        switch (n) {
            case "jan":
            case "mar":
            case "may":
            case "jul":
            case "aug":
            case "oct":
            case "dec":
                System.out.println("31 days");
                break;
                
            case "apr":
            case "jun":
            case "sep":
            case "nov":
                System.out.println("30 days");
                break;
                
            case "feb":
                System.out.println("28 or 29 days (depends on leap year)");
                break;
                
            default:
                System.out.println("Out of range");
        }
    }
}
