package JAVA;
import java.util.*;

public class task9 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int i, j;
        System.out.println("Enter values in matrix 1...");
        int a1[][] = new int[2][3];
        int a2[][] = new int[2][3];
        for(i = 0; i < 2; i++) {
            for(j = 0; j < 3; j++) {
                System.out.print("Enter value in row "+(i+1)+" column "+(j+1)+ " : ");
                a1[i][j] = in.nextInt();
            }
        }
        System.out.println("Enter values in matrix 2...");
        for(i = 0; i < 2; i++) {
            for(j = 0; j < 3; j++) {
                System.out.print("Enter value in row "+(i+1)+" column "+(j+1)+ " : ");
                a2[i][j] = in.nextInt();
            }
        }
        System.out.println("Sum of the matrices : ");
        for(i = 0; i < 2; i++) {
            for(j = 0; j < 3; j++) {
                int sum = a1[i][j] + a2[i][j];
                System.out.print(sum +" ");
            }
            System.out.println();
        }
        in.close();
    }
}
