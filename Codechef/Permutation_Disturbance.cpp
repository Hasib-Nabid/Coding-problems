#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define pb push_back
#define po pop_back
#define F first
#define S second
#define endl '\n'
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define shesh cout << endl
#define forn(i, n) for(int i = 0; i < int(n); i++)
#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)

ll gcd ( ll a, ll b ) { return __gcd ( a, b ); }
ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) ); }
const double PI = acos(-1);

#define nabidtheboss() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define w(t) int t; cin >> t; cin.ignore(); while (t--) 

int main()
{
    nabidtheboss();
    w(t){
        ll n,c=0,ans=0;
        cin>>n;
        ll a[n];
        vi v;
        for (ll i=0;i<n;i++){
        cin>>a[i];

         if (a[i]==i+1){
         c++;
     if(i==n-1 and c>0){
            v.push_back(c);
        }
        }
        else{
            if(c>0)
        v.push_back(c);
            c=0;
        }
    }

    for (int i=0;i<v.size();i++)
        ans+=ceil(v[i]/2.0);
    cout<<ans<<endl;
        }
    

    return 0;
}