import java.util.Scanner;

class MyArray {
    public static int arrayCapital(char[] arr) {
        int count = 0;

        for (char c : arr) {
            if (c >= 'A' && c <= 'Z') {
                count++;
            }
        }

        return count;
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter number of elements for the character array: ");
        int noOfElements = scanner.nextInt();

        char[] arr = new char[noOfElements];

        System.out.println("Enter the character elements for the array...");
        for (int i = 0; i < arr.length; i++) {
            System.out.printf("Element-%d: ", i + 1);
            arr[i] = scanner.next().charAt(0);
        }

        System.out.println("Count of capital alphabets from the array?");
        System.out.println("Result: " + MyArray.arrayCapital(arr));

        scanner.close();

    }
}