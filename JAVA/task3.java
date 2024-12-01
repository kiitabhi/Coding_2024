package JAVA;
import java.util.Scanner;

public class task3 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int i;
        System.out.println("Table of 10 in reverse order...");
        for(i = 10;i >= 1;i--) {
            System.out.println("10 x "+i+" = "+(i*10));
        }
        in.close();
    }
}
