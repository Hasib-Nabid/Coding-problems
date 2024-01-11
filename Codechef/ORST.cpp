#include<bits/stdc++.h>
using namespace std;


int main()
{
   
    int t;
    cin>>t;
    while(t--){
        int n,m,mx=0;
        cin>>n>>m;
        vector<int>a(n),b(m);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) {
            cin>>b[i];
            if(b[i]>mx) mx=b[i];
        }
        
     sort(a.rbegin(),a.rbegin()+mx,greater<int>());
         for(auto u: a) cout<<u<<" ";
         cout<<endl;
    }
    return 0;
}