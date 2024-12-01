import javax.swing.*;

public class gcal {
    public static void main(String[] args) {
        int n = 0;
        float a, b;
        double result = 0;

        while (true) {
            n = Integer.parseInt(JOptionPane.showInputDialog("1. ADD\n2. SUBTRACT\n3. MULTIPLY\n4. DIVIDE\n5. EXIT"));
            if (n == 1) {
                a = Float.parseFloat(JOptionPane.showInputDialog("Enter 1st number"));
                b = Float.parseFloat(JOptionPane.showInputDialog("Enter 2nd number"));
                result = a + b;
                JOptionPane.showMessageDialog(null, "Sum of the numbers = "+ result);
            }

            else if (n == 2) {
                a = Float.parseFloat(JOptionPane.showInputDialog("Enter 1st number"));
                b = Float.parseFloat(JOptionPane.showInputDialog("Enter 2nd number"));
                result = a - b;
                JOptionPane.showMessageDialog(null, "Difference b/w the numbers = " +result);
            }

            else if (n == 3) {
                a = Float.parseFloat(JOptionPane.showInputDialog("Enter 1st number"));
                b = Float.parseFloat(JOptionPane.showInputDialog("Enter 2nd number"));
                result = a * b;
                JOptionPane.showMessageDialog(null, "Product of the numbers = " +result);
            }

            else if (n == 4) {
                a = Float.parseFloat(JOptionPane.showInputDialog("Enter 1st number"));
                b = Float.parseFloat(JOptionPane.showInputDialog("Enter 2nd number"));
                result = a / b;
                JOptionPane.showMessageDialog(null, "Qoutient the numbers = " +result);
            }

            else if (n == 5) {
                JOptionPane.showMessageDialog(null, "Greetings from Abhishek Dutta");
                break;
            }

            else {
                JOptionPane.showMessageDialog(null, "Invalid choice");
            }
        }
    }
}