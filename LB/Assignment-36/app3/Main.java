import java.util.Scanner;

class Numbers {
    public static int lastOccurence(int[] arr, int iNo) {
        int iPos = -1;
        for (int iCnt = arr.length - 1; iCnt >= 0; iCnt--) {
            if (arr[iCnt] == iNo) {
                iPos = iCnt + 1;
                break;
            }

        }

        return iPos;
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

        int iRet = Numbers.lastOccurence(numbers, number);

        if (iRet == -1) {
            System.out.println("The number is not present.");
        } else {
            System.out.println("The last occurence of " + number + ": " + iRet);
        }

        scanner.close();

    }
}