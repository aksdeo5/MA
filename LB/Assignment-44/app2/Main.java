import java.util.Scanner;

class MyArray {
    public static int countVowels(char[] arr) {
        int count = 0;
        for (char c : arr) {
            if (c == 'a' || c == 'A' ||
                    c == 'e' || c == 'E' ||
                    c == 'i' || c == 'I' ||
                    c == 'o' || c == 'O' ||
                    c == 'u' || c == 'U') {
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

        System.out.println("Count of Vowels?");
        System.out.println("Result: " + MyArray.countVowels(arr));

        scanner.close();

    }
}