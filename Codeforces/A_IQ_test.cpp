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
    vector<int>x,y;
    for(int i=0;i<n;i++) {
        cin>>v[i];
        if(v[i]%2==0) x.push_back(i);
        else y.push_back(i);
    }
    if(x.size()==1) cout<<x[0]+1;
    else cout<<y[0]+1;
       
    return 0;
}