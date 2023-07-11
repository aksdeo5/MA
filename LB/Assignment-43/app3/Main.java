import java.util.Scanner;

class MyArray {
    public static int[] copyArrRev(int[] arr) {
        int[] arrRet = new int[arr.length];

        for (int i = arr.length - 1, j = 0; i >= 0; j++, i--) {
            arrRet[j] = arr[i];
        }

        return arrRet;
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
        int nOfElements1 = scanner.nextInt();
        int[] arr = new int[nOfElements1];
        System.out.println("Enter elements for the array...");
        for (int i = 0; i < arr.length; i++) {
            System.out.printf("Element-%d: ", i + 1);
            arr[i] = scanner.nextInt();
        }

        int[] arrRet = MyArray.copyArrRev(arr);

        MyArray.display(arrRet);

        scanner.close();

    }
}