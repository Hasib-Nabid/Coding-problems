import java.util.Scanner;

public class A_Raising_Bacteria {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long x, s = 1;
        x = sc.nextLong();
        while (x > 1) {
            if (x % 2 == 0)
                x /= 2;
            else {
                s++;
                x--;
                x /= 2;
            }
        }
        sc.close();
        System.out.println(s);
    }
}