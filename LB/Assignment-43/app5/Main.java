import java.util.Arrays;
import java.util.Scanner;

class MyArray {
    public static boolean isPalindrome(int no) {
        if (no < 0) {
            no = -no;
        }

        int temp = no;
        int rev = 0;
        int digit = 0;

        while (temp != 0) {
            digit = temp % 10;
            rev = rev * 10 + digit;
            temp /= 10;
        }

        return rev == no;
    }

    public static int[] copyRevArr(int[] arr) {
        int[] arrRet = new int[arr.length];

        for (int i = 0, j = arr.length - 1; i < arrRet.length; j--, i++) {
            arrRet[i] = arr[j];
        }

        return arrRet;
    }

    public static boolean chkPalindrome(int[] arr) {
        boolean flag = true;

        for (int no : arr) {
            if (!isPalindrome(no)) {
                flag = false;
                break;
            }
        }

        int[] arrRet = copyRevArr(arr);
        if (!Arrays.equals(arr, arrRet)) {
            flag = false;
        }

        return flag;
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter number of elements for the array: ");
        int nOfElements = scanner.nextInt();
        int[] arr = new int[nOfElements];
        System.out.println("Enter elements for the array...");
        for (int i = 0; i < arr.length; i++) {
            System.out.printf("Element-%d: ", i + 1);
            arr[i] = scanner.nextInt();
        }

        System.out.println("Is the array along with each individual element palindrome?");
        System.out.println("Result: " + MyArray.chkPalindrome(arr));

        scanner.close();

    }
}