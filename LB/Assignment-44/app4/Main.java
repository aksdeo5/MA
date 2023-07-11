import java.util.Scanner;

class MyArray {
    public static int diffCapSmall(char[] arr) {
        int countCap = 0;
        int countSmall = 0;

        for (char c : arr) {
            if (c >= 'A' && c <= 'Z') {
                countCap++;
            } else if (c >= 'a' && c <= 'z') {
                countSmall++;
            }
        }

        int difference = countCap - countSmall;
        if (difference < 0) {
            difference = -difference;
        }

        return difference;
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

        System.out.println("Difference between captital and small alphabets in the array?");
        System.out.println("Result: " + MyArray.diffCapSmall(arr));

        scanner.close();

    }
}