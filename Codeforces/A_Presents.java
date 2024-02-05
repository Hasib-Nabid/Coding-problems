import java.util.Scanner;
public class A_Presents {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n + 1];
        for (int i = 1; i <= n; i++) {
            int j = sc.nextInt();
            a[j] = i;
        }
        for (int i = 1; i <= n; i++) {
         if (i != 1) System.out.print(" " + a[i]);
         else System.out.print(a[i]);   
        }
        System.out.println();
        sc.close();
    }
}
