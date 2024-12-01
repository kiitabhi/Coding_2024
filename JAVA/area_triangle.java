package JAVA;
import javax.swing.*;

public class area_triangle {
    public static void main(String[] args) {
        float a = Float.parseFloat(JOptionPane.showInputDialog("Enter length of 1st side"));
        float b = Float.parseFloat(JOptionPane.showInputDialog("Enter length of 1st side"));
        float c = Float.parseFloat(JOptionPane.showInputDialog("Enter length of 1st side"));
        
        float s = (a + b + c) / 2;
        double ar = Math.sqrt(s * (s - a) * (s - b) * (s - c));

        JOptionPane.showMessageDialog(null, "Area of Triangle : "+ ar);
    }
}
