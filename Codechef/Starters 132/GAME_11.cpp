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
int gcd ( int a, int b ) { return __gcd ( a, b ); }
int lcm ( int a, int b ) { return a * ( b / gcd ( a, b ) ); }
const double PI = acos(-1);
#define nabidtheboss() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define w(t) int t; cin >> t; cin.ignore(); while (t--) 

int32_t main () {
    nabidtheboss();
    w(t) {
        int n,m;
        cin>>n>>m;
        vi v(n),vv(m),x;
        loop(i,n) cin>>v[i];
        loop(i,m) cin>>vv[i];

        if(n<4 or m<4 or n+m<11){
            cout<<-1<<endl;
        } 
        
        else {
            int s = 0;
            sort(rall(v));
            sort(rall(vv));

            for(int i = 0; i < 4; i++) {
                s += v[i];
                s += vv[i];
            }

            for(int i = 4; i < n; i++) {
                x.push_back(v[i]);
            }

            for(int i = 4; i < m; i++) {
                x.push_back(vv[i]);
            }

            sort(rall(x));
            for(int i = 0; i < 3; i++) {
                s += x[i];
            }

            cout << s << endl;
        }
        x.clear(); 
    }
    return 0;
}
