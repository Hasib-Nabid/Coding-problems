import java.util.Scanner;

public class A_Buttons{
    public static void main(String[] args) {
        int t;
        Scanner sc=new Scanner(System.in);
        t=sc.nextInt();
        while(t-->0){
            int a,b,c;
            a=  sc.nextInt();
            b=  sc.nextInt();
            c=  sc.nextInt();
            if(a==b && c%2==1){
                System.out.println("First");
            }
           else if(a==b && c%2==0){
                System.out.println("Second");
            }
            else if(a+c>b+c){
                System.out.println("First");
            }
            else  System.out.println("Second");
            sc.close();
        }
    }
}