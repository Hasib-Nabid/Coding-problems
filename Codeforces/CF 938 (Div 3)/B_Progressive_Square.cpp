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
        int n,c,d;
        cin>>n>>c>>d;
        vi v(n*n);
        loop(i,n*n){
             cin>>v[i];
             }

       sort(all(v));

        int diff=abs(c-d);
        int sz=n*n;
        bool flag=true;

        for(int i=1;i<v.size()-2;i++){
            if(abs(v[i]-v[i+1])!=diff) {
                flag=false;
                break;
        }
        }
        if(abs(v[sz-1]-v[sz-2])!=c and abs(v[sz-1]-v[sz-2])!=d) flag=false;
        if(abs(v[1]-v[0])!=c and abs(v[1]-v[0]!=d)) flag=false;
        if(flag) yes;
         else no;
    }
        return 0;
}