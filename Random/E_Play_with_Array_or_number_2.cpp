#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();
        int t;
        cin>>t;
        while(t--){
          int n,mx=0,val=0;
          cin>>n;
          map<int,int>mp;
          vector<int>v;

        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            v.push_back(a);
        }

       for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++)
        v.push_back(__gcd(v[i],v[j]));
       }

       for(auto u:v){
        mp[u]++;
        if(mp[u]>mx) {
            mx=mp[u];
            val=u;
       }
       }
       if(mp.count(1) || mx==1){
        cout<<"1"<<endl;
       }
       else cout<<val<<endl;
        }

        
    return 0;
}