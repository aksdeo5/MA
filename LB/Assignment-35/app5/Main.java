import java.util.Scanner;

class Digits {
    public static int countDiff(int number) {
        int sumOfEven = 0;
        int sumOfOdd = 0;
        int digit = 0;

        while (number != 0) {
            digit = number % 10;
            if (digit % 2 == 0) {
                sumOfEven += digit;
            } else {
                sumOfOdd += digit;
            }
            number /= 10;
        }

        return sumOfEven - sumOfOdd;
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number: ");
        int number = scanner.nextInt();

        System.out.println("Difference: " + Digits.countDiff(number));

        scanner.close();

    }
}