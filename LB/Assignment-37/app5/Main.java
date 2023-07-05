import java.util.Scanner;

class StringDemo {
    public static String toLowerCaseX(String str) {
        char[] arr = str.toCharArray();

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] >= 'A' && arr[i] <= 'Z') {
                arr[i] = (char) (arr[i] + 32);
            }
        }

        return new String(arr);
    }

    public static String getRevStr(String str) {
        char[] arr = str.toCharArray();

        int start = 0;
        int end = arr.length - 1;

        while (start < end) {
            char temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;

            start++;
            end--;
        }

        return new String(arr);
    }

    public static boolean strCompX(String str1, String str2) {
        if (str1.length() != str2.length()) {
            return false;
        }

        boolean flag = true;
        char[] arr1 = str1.toCharArray();
        char[] arr2 = str2.toCharArray();

        for (int i = 0; i < arr1.length; i++) {
            if (arr1[i] != arr2[i]) {
                flag = false;
                break;
            }
        }

        return flag;
    }

    public static boolean isPalindromeX(String str) {
        str = toLowerCaseX(str);
        String strRev = StringDemo.getRevStr(str);

        return StringDemo.strCompX(str, strRev);
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the string: ");
        String str = scanner.nextLine();

        System.out.println("Is " + str + " palindrome? : " + StringDemo.isPalindromeX(str));

        scanner.close();

    }
}