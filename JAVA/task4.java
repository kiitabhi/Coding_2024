package JAVA;
import java.util.*;

public class task4 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int i, n, f=1;
        System.out.print("Enter a number to find factorial : ");
        n = in.nextInt();
        for(i=1;i<=n;i++) {
            f *= i;
        }
        System.out.println("Factorial of "+n+" = "+f);
        in.close();
    }
}
