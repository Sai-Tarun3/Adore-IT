import java.util.*;  // Corrected spelling of 'util'

class for2 {
    public static void main(String[] args) {  // Corrected 'voidd' to 'void'
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter a number:");  // Prompt the user for input
        
        int n = sc.nextInt();
        
        for (int i = 1; i <= n; i++) {  // Loop to print numbers from 1 to n
            System.out.print(i);
        }
    }
}
