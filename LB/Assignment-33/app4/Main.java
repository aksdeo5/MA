import java.util.Scanner;

class StringDemo {
    public static boolean containsVowel(String str) {
        boolean flag = false;
        for (int i = 0; i < str.length(); i++) {
            char c = str.charAt(i);
            if (c == 'a' || c == 'A' ||
                    c == 'e' || c == 'E' ||
                    c == 'i' || c == 'I' ||
                    c == 'o' || c == 'O' ||
                    c == 'u' || c == 'U') {
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

        System.out.print("Enter a string: ");
        String str = scanner.nextLine();

        System.out.println("Contains vowel? : " + StringDemo.containsVowel(str));

        scanner.close();

    }
}