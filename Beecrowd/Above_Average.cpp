#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
         cin>>n;
        int x[n];
        int sum=0,count=0;
        double average,r;
     
        for(int i=0;i<n;i++)
        {
            cin>>x[i];
            sum+=x[i];

        }
        average=sum/n;
        for(int i=0;i<n;i++)
        {
            if(x[i]>average)
                count++;
        }
        cout<< fixed<< setprecision (3)<<(count*100.0/n) <<"%"<<endl;
    }
    return 0;
}