import java.util.Scanner;

class StringDemo {
    public static int difference(String str) {
        int countCapital = 0;
        int countSmall = 0;
        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i) >= 'A' && str.charAt(i) <= 'Z') {
                countCapital++;
            }
        }
        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i) >= 'a' && str.charAt(i) <= 'z') {
                countSmall++;
            }
        }
        return countSmall - countCapital;
    }

}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String str = scanner.nextLine();

        System.out.println("Difference: " + StringDemo.difference(str));

        scanner.close();

    }
}