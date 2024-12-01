package JAVA;
import java.util.*;

public class task11 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int i, n;
        System.out.print("Enter the size of the array : ");
        n = in.nextInt();
        int a[] = new int[n];
        for(i = 0; i < n; i++) {
            System.out.print("Enter element "+(i+1)+ " : ");
            a[i] = in.nextInt();
        }
        int max = a[0];
        int min = a[0];
        for(i = 1; i < n; i++) {
            if(a[i] > max)
                max = a[i];
            else if(a[i] < min)
                min = a[i];
        }
        System.out.println("Maximum element in the array = "+max);
        System.out.println("Minimum element in the array = "+min);
    }
}
