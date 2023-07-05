import java.util.Scanner;

class Numbers {
    public static boolean check(int[] arr, int iNo) {
        boolean flag = false;

        for (int iCnt = 0; iCnt < arr.length; iCnt++) {
            if (arr[iCnt] == iNo) {
                flag = true;
                break;
            }
        }

        return flag;
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of elements: ");
        int count = scanner.nextInt();

        int[] numbers = new int[count];

        System.out.println("Enter the elements... ");
        for (int iCnt = 0; iCnt < count; iCnt++) {
            System.out.print("Element-" + (iCnt + 1) + ": ");
            numbers[iCnt] = scanner.nextInt();
        }

        System.out.print("Enter the number you want to check: ");
        int number = scanner.nextInt();

        System.out.println("Is " + number + " present? : " + Numbers.check(numbers, number));

        scanner.close();

    }
}