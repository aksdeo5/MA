import java.util.Scanner;

class Digits {
    public static int countRange(int number) {
        int count = 0;
        int digit = 0;

        while (number != 0) {
            digit = number % 10;
            if (digit >= 3 && digit <= 7) {
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

        System.out.println("Range(3 to 7) count: " + Digits.countRange(number));

        scanner.close();

    }
}