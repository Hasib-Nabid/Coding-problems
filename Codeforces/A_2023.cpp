#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
     int n,k; cin>>n>>k;
        int mul=1;
        for(int i=0;i<n;i++){
            int x; cin>>x; 
            mul*=x;
        }
        if(2023%mul) cout<<"NO"<<endl;
        else {
            cout<<"YES"<<endl;
            cout<<2023/mul<<" ";
            k--;
            for(int i=1;i<=k;i++) cout<<1<<" ";
             cout<<endl;
        }

    }
    return 0;
}