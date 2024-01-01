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

    for(int i=0;i,n;i++) cin>>v[i];
    int cnt=0;
    for(int i=0;i<n;i++){
        if(v[i]+1==v[i+1]) cnt++;
    }
    cout<<cnt;
    return 0;3
1 2 3
}