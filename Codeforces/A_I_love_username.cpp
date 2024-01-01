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
    for(int i=0;i<n;i++)  cin>>v[i];
    int mx=v[0],mn=v[0],cnt=0;
    for(int i=1;i<n;i++) {
        if(v[i]>mx){
            mx=v[i];
            cnt++;
        }
        if(v[i]<mn){
            mn=v[i];
            cnt++;
        }
    }
    cout<<cnt;
       
    return 0;
}