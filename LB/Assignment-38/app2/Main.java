import java.util.Scanner;

class Pattern {
    public static void displayPattern(int rows, int cols) {
        char c = '\0';
        for (int i = 1; i <= rows; i++) {
            c = (i % 2 == 0) ? 'a' : 'A';
            for (int j = 1; j <= cols; c++, j++) {
                System.out.printf("%c\t", c);
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