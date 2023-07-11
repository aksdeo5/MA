import java.util.Scanner;

class Pattern {
    public static void displayPattern(int rows, int cols) {
        if (rows != cols) {
            throw new IllegalArgumentException("Number of rows and columns must be eqaul for a square matrix.");
        }
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= cols; j++) {
                if (i + j == cols + 1) {
                    System.out.print("#\t");
                } else {
                    System.out.print("*\t");
                }
            }
            System.out.println();
        }
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter number of rows: ");
        int rows = scanner.nextInt();

        System.out.print("Enter number of columns: ");
        int cols = scanner.nextInt();

        Pattern.displayPattern(rows, cols);

        scanner.close();

    }
}