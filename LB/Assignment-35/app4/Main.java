import java.util.Scanner;

class Digits {
    public static int multOfDigits(int number) {
        int mult = 1;

        while (number != 0) {
            if (number % 10 != 0) {
                mult *= number % 10;
            }
            number /= 10;
        }

        return mult;
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number: ");
        int number = scanner.nextInt();

        System.out.println("Multiplication of digits: " + Digits.multOfDigits(number));

        scanner.close();

    }
}