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
    string s;
    cin>>s;
    int sz=s.size();
    int ans= s[sz-1]-'0';
    if(ans%2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}