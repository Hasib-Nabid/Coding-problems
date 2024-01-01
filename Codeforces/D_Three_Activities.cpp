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
        vector<int>v;
        v.clear();
        ll sum=0;
        int n,m1=0,m2=0,m3=0;
        cin>>n;
        int a[n],b[n],c[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        for(int i=0;i<n;i++) cin>>c[i];

        for(int i=0;i<n;i++) {
          int mx=max({a[i],b[i],c[i]});
          v.push_back(mx);
        }
        sort(v.rbegin(),v.rend());
        cout<<v[0]+v[1]+v[2]<<endl;
    }
    return 0;
}