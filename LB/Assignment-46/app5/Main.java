import java.util.Scanner;

class MyArray {
    public static void displayPercentage(float[] arr) {
        String remark = null;
        for (float f : arr) {
            if (f < 35) {
                remark = "fail";
            } else if (f < 50) {
                remark = "Pass";
            } else if (f < 60) {
                remark = "Second class";
            } else if (f < 70) {
                remark = "First class";
            } else {
                remark = "First class with Distiction";
            }
            System.out.printf("%.1f\t%s\n", f, remark);
        }
        System.out.println();
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter number of students: ");
        int noOfStudents = scanner.nextInt();

        float[] arr = new float[noOfStudents];

        System.out.println("Enter marks obtained by each student...");
        for (int i = 0; i < arr.length; i++) {
            System.out.printf("Student-%d: ", i + 1);
            arr[i] = scanner.nextFloat();
        }

        MyArray.displayPercentage(arr);

        scanner.close();

    }
}