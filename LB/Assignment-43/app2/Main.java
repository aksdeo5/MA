import java.util.Scanner;

class MyArray {
    public static void displayMinArray(int[] arr1, int[] arr2) {
        int min1 = arr1[0];
        for (int i : arr1) {
            if (i < min1) {
                min1 = i;
            }
        }

        int min2 = arr2[0];
        for (int i : arr2) {
            if (i < min2) {
                min2 = i;
            }
        }

        System.out.printf("%d\t%d\n", min1, min2);
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

        MyArray.displayMinArray(arr1, arr2);

        scanner.close();

    }
}