package JAVA;
import java.util.*;

public class task10 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int i, n, t;
        System.out.print("Enter size of the array : ");
        n = in.nextInt();
        int a[] = new int[n];
        for(i = 0; i < n; i++) {
            System.out.print("Enter element "+(i+1)+" : ");
            a[i] = in.nextInt();
        }
        System.out.println("Original array ...");
        for(i = 0; i < n; i++) {
            System.out.print(a[i] +" ");
        }
        if (n % 2 == 0) {
            for(i = 0; i < (n/2); i++) {
                t = a[i];
                a[i] = a[n - i - 1];
                a[n - i - 1] = t;
            }
        }
        else {
            for(i = 0; i < ((n-1)/2); i++) {
                t = a[i];
                a[i] = a[n - i - 1];
                a[n - i - 1] = t;
            }
        }
        System.out.println("\nReversed array ...");
        for(i = 0; i < n; i++) {
            System.out.print(a[i] +" ");
        }
        in.close();
    }
}
