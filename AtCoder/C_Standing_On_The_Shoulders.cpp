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

bool cmp (const pair<int,int>& a, const pair<int,int>& b) {
        return a.second < b.second;
}

int32_t main () 
{

    nabidtheboss();
    int n;
    cin>>n;
    vector<pair<int,int>>v(n);

    loop(i,n){
        cin>>v[i].first>>v[i].second;
    }

    sort(rall(v));
    int t1=v[0].first;
 int ans1=v[0].second;
        for(int i=1;i<n;i++){
            ans1=(t1+v[i].second);
        t1+=v[i].first;
    }
   
sort(all(v),cmp);

    int t2=v[0].first;
 int ans2=v[0].second;
        for(int i=1;i<n;i++){
            ans2=(t2+v[i].second);
        t2+=v[i].first;
    }

    cout<<max(ans1,ans2)<<endl;
    return 0;
}