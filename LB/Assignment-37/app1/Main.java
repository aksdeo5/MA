import java.util.Scanner;

class StringDemo {
    public static String strNCatX(String str1, String str2, int iNo) {
        char[] arr1 = str1.toCharArray();
        char[] arr2 = str2.toCharArray();
        char[] arr3 = new char[arr1.length + arr2.length];

        for (int i = 0; i < arr1.length; i++) {
            arr3[i] = arr1[i];
        }

        if (iNo > arr2.length) {
            for (int i = 0, j = arr1.length; i < arr2.length; j++, i++) {
                arr3[j] = arr2[i];
            }
        } else {
            for (int i = 0, j = arr1.length; i < iNo; j++, i++) {
                arr3[j] = arr2[i];
            }
        }

        return new String(arr3);
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the first string: ");
        String str1 = scanner.nextLine();

        System.out.print("Enter the second string: ");
        String str2 = scanner.nextLine();

        System.out.print("Enter the number of characters: ");
        int numberOfChars = scanner.nextInt();

        String sRet = StringDemo.strNCatX(str1, str2, numberOfChars);

        System.out.println("Result: " + sRet);
        System.out.println("Len: " + sRet.length());

        scanner.close();

    }
}