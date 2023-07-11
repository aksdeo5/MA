import java.util.Scanner;

class MyArray {
    public static void displayPattern(int[] arr) {
        for (int i : arr) {
            for (int j = 1; j <= i; j++) {
                System.out.print("*\t");
            }
            System.out.println();
        }
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter number of elements for the array: ");
        int nOfElements = scanner.nextInt();
        int[] arr = new int[nOfElements];
        System.out.println("Enter elements for the array...");
        for (int i = 0; i < arr.length; i++) {
            System.out.printf("Element-%d: ", i + 1);
            arr[i] = scanner.nextInt();
        }

        MyArray.displayPattern(arr);

        scanner.close();

    }
}