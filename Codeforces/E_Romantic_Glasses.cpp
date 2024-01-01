#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int t;
    cin >> t;
    while(t--) {
        long long sum1=0,sum2=0;
        bool flag=false;
       int n;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++) {
        cin>>a[i];
         if((i+1)%2==1)  sum1+=a[i];
         else sum2+=a[i];
        }
        long long diff=abs(sum1-sum2);

        if(diff==0) flag=true;
        else {
         for(int i=0;i<n-1;i++) {
            if(abs(a[i]-a[i+1])==diff){
                flag=true;
                break;
            }
        }
        }

   if(flag) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
    }

    return 0;
}
