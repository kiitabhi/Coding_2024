package JAVA;
import java.util.*;

public class task7 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n, i, f = 0, num;
        System.out.print("Enter the size of array : ");
        n = in.nextInt();
        int a[] = new int[n];
        for(i = 0 ; i < n ; i++) {
            System.out.print("Enter element "+(i+1)+" : ");
            a[i] = in.nextInt();
        }
        System.out.print("Enter the number to find in the array : ");
        num = in.nextInt();
        for(i = 0 ; i < n ; i++) {
            if(a[i] == num) {
                f = 1;
                break;
            }
        }
        if (f == 1) 
            System.out.println("Found "+num+" in position "+(i+1));
        else
            System.out.println(num+" is not present in the array...");
        in.close();
    }
}
