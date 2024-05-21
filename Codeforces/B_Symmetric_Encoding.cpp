#include<bits/stdc++.h>
using namespace std;

#define int long long
#define loopoat double
#define endl '\n'
#define pb push_back
#define po pop_back
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define shesh cout << endl
#define loop(i,n) for (int i =0; i < (n); ++i)
#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
typedef vector<int> vi;
int gcd ( int a, int b ) { return __gcd ( a, b ); }
int lcm ( int a, int b ) { return a * ( b / gcd ( a, b ) ); }
const double PI = acos(-1);
#define nabidtheboss() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::loopoatfield); cout.precision(10); cout.setf(ios::fixed,ios::loopoatfield);
#define w(t) int t; cin >> t; cin.ignore(); while (t--) 


int32_t main () 
{

    nabidtheboss();
    w(t){
        int n;
    cin>>n;
    string s;
    cin>>s;
    set<char>st;
    loop(i,n){
        st.insert(s[i]);
    }

    vector<char>v;

    for(auto &ch:st){
        v.pb(ch);
    }

    map<char,char>mp;

    loop(i,sz(v)){
        mp[v[i]]=v[sz(v)-i-1];
    }

    loop(i,n){
        cout<<mp[s[i]];
    }
    cout<<endl;
    }

    return 0;
}