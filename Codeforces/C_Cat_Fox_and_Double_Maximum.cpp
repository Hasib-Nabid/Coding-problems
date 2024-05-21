#include<bits/stdc++.h>
using namespace std;

#define int long long
#define float double
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
typedef vector<pair<int,int>> vp;
int gcd ( int a, int b ) { return __gcd ( a, b ); }
int lcm ( int a, int b ) { return a * ( b / gcd ( a, b ) ); }
const double x = acos(-1);
#define nabidtheboss() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define w(t) int t; cin >> t; cin.ignore(); while (t--) 


int32_t main () 
{
    nabidtheboss();
    w(t){
        int n;
        cin >> n;       
        vi v(n),pre(n);
        loop(i,n)  cin >> v[i];
        loop(i,n) pre[i] = (n + 1) - v[i];
        int c= 0;
        loop(i,n) {
            if (pre[i] == n) {
                c = i;
            }
        }
        
       vp x;
        x.pb({n, c});
        
     loop(i,n) {
        if (i % 2 != c % 2)  x.pb({pre[i], i});  
        }
        
        sort(rall(x));
        
        for (int i=1;i<sz(x);i++) {
            pre[x[i].second]=x[i - 1].first;
        }
        
        pre[x[0].second]=x.back().first;
        
        for (auto &u : pre) {
            cout<<u<<" ";
        }
          
        shesh;
    }
}
