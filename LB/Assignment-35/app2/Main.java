import java.util.Scanner;

class Digits {
    public static int countOdd(int number) {
        int count = 0;

        while (number != 0) {
            if ((number % 10) % 2 != 0) {
                count++;
            }
            number /= 10;
        }

        return count;
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number: ");
        int number = scanner.nextInt();

        System.out.println("Odd count: " + Digits.countOdd(number));

        scanner.close();

    }
}