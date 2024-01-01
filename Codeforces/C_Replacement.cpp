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
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<n;i++) {
        if(v[i]<0){
            replace(v.begin(),v.end(),v[i],2);
        }
         else if(v[i]>0){
            replace(v.begin(),v.end(),v[i],1);
        }
    }
    for(auto u:v) cout<<u<<" ";
    return 0;
}