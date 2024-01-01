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
    vector<int>v(4);
    for(int i=0;i<4;i++) cin>>v[i];
    sort(v.begin(),v.end());
    int x,y,z;
    x=v[3]-v[0];
    y=v[1]-x;
    z=v[2]-x;

    cout<<x<<" "<<y<<" "<<z;
    return 0;
}