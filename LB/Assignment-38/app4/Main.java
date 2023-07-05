import java.util.Scanner;

class Pattern {
    public static void displayPattern(int rows, int cols) {
        for (int i = rows; i >= 1; i--) {
            for (int j = 1; j <= cols; j++) {
                System.out.printf("%d\t", i);
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