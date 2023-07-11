import java.util.Scanner;

class MyArray {
    public static void displayOdd(int[] arr1, int[] arr2) {
        for (int i : arr1) {
            if (i % 2 != 0) {
                System.out.print(i + "\t");
            }
        }
        System.out.println();

        for (int i : arr2) {
            if (i % 2 != 0) {
                System.out.print(i + "\t");
            }
        }
        System.out.println();
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter number of elements for the first array: ");
        int nOfElements1 = scanner.nextInt();
        int[] arr1 = new int[nOfElements1];
        System.out.println("Enter elements for the first array...");
        for (int i = 0; i < arr1.length; i++) {
            System.out.printf("Element-%d: ", i + 1);
            arr1[i] = scanner.nextInt();
        }

        System.out.print("Enter number of elements for the second array: ");
        int nOfElements2 = scanner.nextInt();
        int[] arr2 = new int[nOfElements2];
        System.out.println("Enter elements for the first array...");
        for (int i = 0; i < arr2.length; i++) {
            System.out.printf("Element-%d: ", i + 1);
            arr2[i] = scanner.nextInt();
        }

        MyArray.displayOdd(arr1, arr2);

        scanner.close();

    }
}