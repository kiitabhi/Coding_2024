package JAVA;
import java.util.*;

public class prime {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n, c = 0, i;
        System.out.print("Enter a number to check : ");
        n = in.nextInt();
        for (i = 2; i < n - 1; i++) {
            if (n % i == 0) {
                c++;
            }
        }

        if (c == 0) {
            System.out.println("Number is prime");
        }
        else {
            System.out.println("Number is not prime");
        }
        
        in.close();
    }
}