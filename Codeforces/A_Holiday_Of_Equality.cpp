#include<bits/stdc++.h>
using namespace std;

int main()
{
        int n,mx=0;
        long long sum=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
         cin>>a[i];
         if(a[i]>mx) mx=a[i];
        }

        for(int i=0;i<n;i++) {
            if(a[i]<mx){
               sum+=mx-a[i];
                }
            }
    cout<<sum<<endl;
    return 0;
}