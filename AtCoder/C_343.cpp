#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define nabidtheboss() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define w(t) int t; cin >> t; cin.ignore(); while (t--) 

bool palindrome(ll &n){
    string s= to_string(n);
    string v=s;
    reverse(v.begin(),v.end());
    return v==s;
}
int main()
{
  nabidtheboss();
    ll n,ans,cube=0;
    cin>>n;
    ll i=1;
    while(cube<n){
        cube=i*i*i;
        if(cube>n) break;
        if(cube<=n && palindrome(cube)){
            ans=cube;
        } 
        i++;
    }
 cout<<ans<<endl;
    return 0;
}