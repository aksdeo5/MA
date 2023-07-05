import java.util.Scanner;

class StringDemo {
    public static boolean strNCompX(String str1, String str2, int firstN) {
        boolean flag = true;
        char[] arr1 = str1.toCharArray();
        char[] arr2 = str2.toCharArray();

        if (arr1.length < firstN || arr2.length < firstN) {
            return false;
        }

        for (int i = 0; i < firstN; i++) {
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

        System.out.print("Enter the number: ");
        int no = scanner.nextInt();

        System.out.println("Are first " + no + " characters equal? : " + StringDemo.strNCompX(str1, str2, no));

        scanner.close();

    }
}