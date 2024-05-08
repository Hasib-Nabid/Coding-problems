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

 int n,m;

 bool ok(vector<vector<char>>&a,char s){
        vi v;
    for(int i=0;i<n;i++){
        int c=0;
        if(a[i][0]==s){
            c++;
        }
               if(c>0){
                v.push_back(c);
                break;
              }
    }

    for(int i=0;i<n;i++){
        int c=0;
        if(a[i][m-1]==s){
            c++;
              if(c>0){
                v.push_back(c);
                break;
              }
        }
    }
    for(int i=0;i<m;i++){
        int c=0;
        if(a[0][i]==s){
            c++;
              if(c>0){
                v.push_back(c);
                break;
              }
        }
    }
    for(int i=0;i<m;i++){
        int c=0;
        if(a[n-1][i]==s){
            c++;
              if(c>0){
                v.push_back(c);
                break;
              }
        }
    }
if(v.size()==4) return true;
return false;
 }
int32_t main () 
{

    nabidtheboss();
    w(t){
       
        cin>>n>>m;
        vector<vector<char>>v(n,vector<char>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++) cin>>v[i][j];
        }
    
if(ok(v,'W') || ok(v,'B')) yes;
else no;
    }
    return 0;
}