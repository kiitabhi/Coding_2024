package JAVA;
import java.util.*;

public class palindrome {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n, r;
        int sum = 0;
        System.out.print("Enter a number : ");
        n = in.nextInt();
        int num = n;
        while (n != 0) {
            r = n % 10;
            sum = sum * 10 + r;
            n = n / 10;
        }

        if (sum == num) {
            System.out.println("number is palindrome");
        }
        else {
            System.out.println("number is not palindrome");
        }
        in.close();
    }
}