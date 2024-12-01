package JAVA;
import java.util.*;

public class task6 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a[] = new int[5];
        int i, s = 0;
        for(i = 0;i < 5;i++) {
            System.out.print("Enter element "+(i+1)+" : ");
            a[i] = in.nextInt();
            s += a[i];
        }
        System.out.println("Sum of elements in array : "+s);
    }
}
