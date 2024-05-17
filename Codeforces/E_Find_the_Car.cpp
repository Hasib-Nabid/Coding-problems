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


int32_t main () 
{

    nabidtheboss();

     w(t){
         int n, k, q;
    cin >> n >> k >> q;
    
    vector<int> a(k + 1), b(k + 1);
    for (int i = 1; i <= k; i++) {
        cin >> a[i];
    }

    for (int i = 1; i <= k; i++) {
        cin >> b[i];
    }
    
    while (q--) {
        int d;
        cin >> d;
        
        int j = lower_bound(a.begin(), a.end(), d) - a.begin();
        int ans;
        if (j == 0) ans = 0;
        
        else {
            ans = b[j - 1] + (b[j] - b[j - 1]) * (d - a[j - 1]) / (a[j] - a[j - 1]);
        }
        cout << ans << " \n"[q == 0];
    }
     }


    return 0;
}