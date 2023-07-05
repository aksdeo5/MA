import java.util.Scanner;

class Numbers {
    public static void displayRange(int[] arr, int iStart, int iEnd) {
        System.out.println("The numbers between " + iStart + " and " + iEnd + " are...");
        for (int iCnt = 0; iCnt < arr.length; iCnt++) {
            if (arr[iCnt] >= iStart && arr[iCnt] <= iEnd) {
                System.out.print(arr[iCnt] + "\t");
            }
        }
        System.out.println();
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

        System.out.println("Enter the range...");
        System.out.print("Start: ");
        int start = scanner.nextInt();
        System.out.print("End: ");
        int end = scanner.nextInt();

        Numbers.displayRange(numbers, start, end);

        scanner.close();

    }
}