import java.util.Scanner;

public class A_Goals_of_Victory {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();
            long sum = 0;
            int[] arr = new int[n - 1];

            for (int i = 0; i < n - 1; i++) {
                arr[i] = sc.nextInt();
                sum += arr[i];
            }

            System.out.println(sum * -1);
        }

        sc.close();
    }
}
