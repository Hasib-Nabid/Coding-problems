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
    int n,m;
    cin>>n>>m;
    vector<int>v(m);
    for(int i=0;i<m;i++) cin>>v[i];
    int x;
    cin>>x;
    vector<int>v1(x);
    for(int i=0;i<x;i++) cin>>v1[i];
    v.insert(v.end(),v1.begin(),v1.end());

    sort(v.begin(),v.end());
    int sz=unique(v.begin(),v.end())-v.begin();
    if(sz-n==0) cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;

    return 0;
}