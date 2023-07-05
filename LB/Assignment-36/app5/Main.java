import java.util.Scanner;

class Numbers {
    public static int productOfOdd(int[] arr) {
        int prod = 1;
        for (int iCnt = 0; iCnt < arr.length; iCnt++) {
            if (arr[iCnt] % 2 != 0) {
                prod *= arr[iCnt];
            }
        }
        return prod;
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of elements: ");
        int count = scanner.nextInt();

        int[] numbers = new int[count];

        System.out.println("Enter the elements... ");
        for (int iCnt = 0; iCnt < count; iCnt++) {
            System.out.print("Element-" + (iCnt + 1) + ": ");
            numbers[iCnt] = scanner.nextInt();
        }

        System.out.println("Product of odd numbers: " + Numbers.productOfOdd(numbers));

        scanner.close();

    }
}