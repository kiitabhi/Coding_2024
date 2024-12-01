package JAVA;
import java.util.*;

public class sorting {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int i, j, size, temp;
        System.out.print("Enter the number of items to sort : ");
        size = in.nextInt();
        int[] n = new int[size];
        
        for (i = 0; i < size; i++) {
            System.out.print("Enter number "+ (i + 1) +" : ");
            n[i] = in.nextInt();
        }

        System.out.println("Array before sorting...");
        for (int element:n) {
            System.out.print(element +" ");
        }

        System.out.println("");

        for (i = 0; i < size - 1; i++) {
            for (j = 0; j < size - i - 1; j++) {
                if (n[j] > n[j + 1]) {
                    temp = n[j];
                    n[j] = n[j+1];
                    n[j+1] = temp;
                }
            }
        }
        
        System.out.println("Array after sorting : ");
        for (int element:n) {
            System.out.print(element +" ");
        }
        
        in.close();
    }
}