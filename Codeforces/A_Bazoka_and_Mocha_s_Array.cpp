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
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
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
        int n;
        cin>>n;
        vi v(n);
        loop(i,n) cin>>v[i];

        if(is_sorted(all(v))) yes;

        else{

        int idx=-1,f=v[0];
        for(int i=0;i<n-1;i++){
            if(v[i]>v[i+1]){
                idx=i+1;
                break;
            }
        }

        bool flag=true;

        for(int i=idx;i<n-1;i++){
             if(v[i]>v[i+1]){
                flag=false;
                break;
            }
        }

if(flag==false || v.back()>f) no;
else yes;
     }
     }
    return 0;
}