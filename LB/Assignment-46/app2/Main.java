import java.util.Scanner;

class MyArray {
    private static int getSumOfDigits(int no) {
        int sum = 0;

        while (no != 0) {
            sum += no % 10;
            no /= 10;
        }

        return sum;
    }

    public static void sumArray(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            arr[i] = getSumOfDigits(arr[i]);
        }
    }

    public static void display(int[] arr) {
        for (int i : arr) {
            System.out.print(i + "\t");
        }
        System.out.println();
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter number of elements for the array: ");
        int noOfElements = scanner.nextInt();

        int[] arr = new int[noOfElements];

        System.out.println("Enter the elements for the array...");
        for (int i = 0; i < arr.length; i++) {
            System.out.printf("Element-%d: ", i + 1);
            arr[i] = scanner.nextInt();
        }

        MyArray.sumArray(arr);

        MyArray.display(arr);

        scanner.close();

    }
}