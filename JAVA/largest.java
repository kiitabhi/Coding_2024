package JAVA;
import java.util.*;

public class largest {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a, b, c, max;
        System.out.print("Enter 1st number : ");
        a = in.nextInt();
        System.out.print("Enter 2nd number : ");
        b = in.nextInt();
        System.out.print("Enter 3rd number : ");
        c = in.nextInt();
        max = a;
        if (b > max) {
            if (c > b) {
                max = c;
            }
            else {
                max = b;
            }
        }

        System.out.println("Largest of the three numbers is -> " + max);
        in.close();
    }
}
