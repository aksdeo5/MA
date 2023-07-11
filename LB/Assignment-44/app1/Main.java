import java.util.Scanner;

class MyArray {
    public static void arrayReplace(char[] arr) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] >= 'A' && arr[i] <= 'Z') {
                arr[i] = (char) (arr[i] + 32);
            }
        }
    }

    public static void display(char[] arr) {
        for (char c : arr) {
            System.out.print(c + "\t");
        }
        System.out.println();
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter number of elements for the character array: ");
        int nOfElements = scanner.nextInt();
        char[] arr1 = new char[nOfElements];
        System.out.println("Enter character elements for the array...");
        for (int i = 0; i < arr1.length; i++) {
            System.out.printf("Element-%d: ", i + 1);
            arr1[i] = scanner.next().charAt(0);
        }

        MyArray.arrayReplace(arr1);

        MyArray.display(arr1);

        scanner.close();

    }
}