package JAVA;
import java.util.*;

public class task8 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n, i;
        float sum = 0, avg = 0;
        System.out.print("Enter number of students : ");
        n = in.nextInt();
        float a[] = new float[n];
        System.out.println("Enter Physics marks...");
        for(i = 0 ; i < n ; i++) {
            System.out.print("Student "+(i+1)+" : ");
            a[i] = in.nextFloat();
        }
        for(float element : a) {
            sum += element;
        }
        avg = sum/n;
        System.out.println("Average marks in physics of "+n+" students = "+avg);
    }
}
