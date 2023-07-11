import java.util.Scanner;

class MyArray {
    public static int noOfOccurence(char[] arr, char ch) {
        int count = 0;

        char[] tempArr = new String(arr).toLowerCase().toCharArray();
        if (ch >= 'A' && ch <= 'Z') {
            ch = (char) (ch + 32);
        }

        for (char c : tempArr) {
            if (c == ch) {
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
        int nOfElements = scanner.nextInt();
        char[] arr = new char[nOfElements];
        System.out.println("Enter character elements for the array...");
        for (int i = 0; i < arr.length; i++) {
            System.out.printf("Element-%d: ", i + 1);
            arr[i] = scanner.next().charAt(0);
        }

        System.out.print("Enter the character you want to check: ");
        char c = scanner.next().charAt(0);

        System.out.printf("Number of occurences of '%c' in the array?\n", c);
        System.out.println("Result: " + MyArray.noOfOccurence(arr, c));

        scanner.close();

    }
}