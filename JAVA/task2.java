package JAVA;
import java.util.*;

public class task2 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter number of terms : ");
        int n = in.nextInt();
        int s = 0, c = 1, i;
        for(i = 1;c <= n;i++) {
            if(i % 2 == 0) {
                s += i;
                c++;
            }
        }
        System.out.println("The sum of "+n+" even numbers is = "+s);
        in.close();
    }
}