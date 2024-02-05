import java.util.Scanner;

public class A_Ambitious_Kid{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
            int n,mn=Integer.MAX_VALUE;
            n=  sc.nextInt();
           int[] a=new int[n];
           for(int i=0;i<n;i++){
            a[i]=sc.nextInt();
            if(a[i]<0) a[i]=a[i]*-1;
           }

           for(int i=0;i<n;i++){
            mn=Math. min(mn,a[i]);
           }
            System.out.println(mn);
            sc.close();
        }
    }
