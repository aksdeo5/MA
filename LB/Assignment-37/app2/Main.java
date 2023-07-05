import java.util.Scanner;

class StringDemo {
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
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the first string: ");
        String str1 = scanner.nextLine();

        System.out.print("Enter the second string: ");
        String str2 = scanner.nextLine();

        System.out.println("Are equal? : " + StringDemo.strCompX(str1, str2));

        scanner.close();

    }
}