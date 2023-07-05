import java.util.Scanner;

class ArrayDemo {
    public static void display(int[] arr) {
        System.out.println("Elements those are divisible by 3 and 5 are...");
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] % 3 == 0 && arr[i] % 5 == 0) {
                System.out.print(arr[i] + "\t");
            }
        }
        System.out.println();
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter number of elements: ");
        int count = scanner.nextInt();

        int[] elements = new int[count];

        System.out.println("Enter the elements: ");
        for (int i = 0; i < elements.length; i++) {
            System.out.print("Element-" + (i + 1) + ": ");
            elements[i] = scanner.nextInt();
        }

        ArrayDemo.display(elements);

        scanner.close();

    }
}