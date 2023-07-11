import java.util.Scanner;

class Pattern {
    public static void displayPattern(String str) {
        char[] arr = str.toCharArray();
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr.length; j++) {
                if (j <= i) {
                    System.out.printf("%c\t", arr[j]);
                } else {
                    System.out.print("#\t");
                }
            }
            System.out.println();
        }
        for (int i = 0; i < arr.length; i++) {
            if (i == 0) {
                continue;
            }
            for (int j = 0; j < arr.length; j++) {
                if (i + j <= arr.length - 1) {
                    System.out.printf("%c\t", arr[j]);
                } else {
                    System.out.print("#\t");
                }
            }
            System.out.println();
        }
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the string: ");
        String str = scanner.nextLine();

        Pattern.displayPattern(str);

        scanner.close();

    }
}