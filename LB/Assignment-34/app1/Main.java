import java.util.Scanner;

class ArrayDemo {
    public static int difference(int[] arr) {
        int sumOfEven = 0;
        int sumOfOdd = 0;

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] % 2 == 0) {
                sumOfEven += arr[i];
            } else {
                sumOfOdd += arr[i];
            }
        }

        return sumOfEven - sumOfOdd;
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter number of elements: ");
        int count = scanner.nextInt();

        int[] elements = new int[count];

        System.out.println("Enter the elements: ");
        for (int i = 0; i < elements.length; i++) {
            System.out.print("Element-" + (i + 1) + ": ");
            elements[i] = scanner.nextInt();
        }

        System.out.println("Difference: " + ArrayDemo.difference(elements));

        scanner.close();

    }
}