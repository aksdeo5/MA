import java.util.Scanner;

class Pattern {
    public static void displayPattern(int rows, int cols) {
        for (int i = 1; i <= rows; i++) {
            for (int j = cols; j >= 1; j--) {
                System.out.printf("%d\t", j);
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