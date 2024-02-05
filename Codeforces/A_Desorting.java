import java.util.Scanner;

public class A_Desorting{
    public static void main(String[] args) {
        int t;
        Scanner sc=new Scanner(System.in);
        t=sc.nextInt();
        while(t-->0){
            int n,mn=Integer.MAX_VALUE;
            n=  sc.nextInt();
           int[] a=new int[n];
           for(int i=0;i<n;i++){
            a[i]=sc.nextInt();
           }
           for(int i=0;i<n-1;i++){
            mn=Math. min(mn,a[i+1]-a[i]);
           }
           if(mn<0) System.out.println("0");
           else System.out.println(mn*-1);
           sc.close();
        }
    }
}