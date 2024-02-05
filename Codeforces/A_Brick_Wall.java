import java.util.Scanner;

public class A_Brick_Wall{
    public static void main(String[] args) {
        int t;
        Scanner sc=new Scanner(System.in);
        t=sc.nextInt();
        while(t-->0){
            int n,m;
            n =  sc.nextInt();
            m =  sc.nextInt();
           System.out.println(n*(m/2));
        }
        sc.close();
    }
}