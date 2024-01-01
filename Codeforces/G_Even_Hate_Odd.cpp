#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,even,odd;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) {
            if(a[i]%2==0) even++;
            else odd++;
        }
        if(n%2==1) cout<<"-1"<<endl;
        else{
         if(even==odd) cout<<"0"<<endl;
        else if(even>odd) cout<<(even-odd)/2<<endl;
        else if(odd>even)cout<<(odd-even)/2<<endl;
        }
    }
        
    return 0;
}