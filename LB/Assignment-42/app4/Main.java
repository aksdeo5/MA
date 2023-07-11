import java.util.Scanner;

class MyArray {
    public static int[] concate(int[] arr1, int[] arr2) {
        int[] arr3 = new int[arr1.length + arr2.length];
        int i = 0;
        for (int element : arr1) {
            arr3[i] = element;
            i++;
        }
        for (int element : arr2) {
            arr3[i] = element;
            i++;
        }

        return arr3;
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

        int[] arr3 = MyArray.concate(arr1, arr2);
        
        MyArray.display(arr3);

        scanner.close();

    }
}