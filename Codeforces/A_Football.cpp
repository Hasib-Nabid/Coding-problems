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
     int t,cnt1=0,cnt2=0;
    cin>>t;

    vector<string>v(t);
    for(int i=0;i<t;i++) cin>>v[i];
    sort(v.begin(),v.end());
    // if(v[0]==v[t-1]){
    //     cout<<v[0];
    //     return 0;
    // }

    string temp1=v[0],temp2=v[t-1];
    for(int i=0;i<t;i++) {
        if(v[i]==temp1) cnt1++;
        else cnt2++;
    }
    if(cnt1>cnt2) cout<<temp1;
    else cout<<temp2;
    return 0;
}