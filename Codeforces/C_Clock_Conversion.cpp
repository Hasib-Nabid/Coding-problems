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
        string s;
        cin>>s;
    //     string temp;
    //    temp+=s[0];
    //    temp+=s[1];
    //    int x=stoi(temp);

        if(s[0]=='0' and s[1]=='0') cout<<"12:"<<s[3]<<s[4]<<" AM"<<endl;
        if(s[0]=='0' and s[1]=='1') cout<<"01:"<<s[3]<<s[4]<<" AM"<<endl;
        if(s[0]=='0' and s[1]=='2') cout<<"02:"<<s[3]<<s[4]<<" AM"<<endl;
        if(s[0]=='0' and s[1]=='3') cout<<"03:"<<s[3]<<s[4]<<" AM"<<endl;
        if(s[0]=='0' and s[1]=='4') cout<<"04:"<<s[3]<<s[4]<<" AM"<<endl;
        if(s[0]=='0' and s[1]=='5') cout<<"05:"<<s[3]<<s[4]<<" AM"<<endl;
        if(s[0]=='0' and s[1]=='6') cout<<"06:"<<s[3]<<s[4]<<" AM"<<endl;
        if(s[0]=='0' and s[1]=='7') cout<<"07:"<<s[3]<<s[4]<<" AM"<<endl;
        if(s[0]=='0' and s[1]=='8') cout<<"08:"<<s[3]<<s[4]<<" AM"<<endl;
        if(s[0]=='0' and s[1]=='9') cout<<"09:"<<s[3]<<s[4]<<" AM"<<endl;
        if(s[0]=='1' and s[1]=='0') cout<<"10:"<<s[3]<<s[4]<<" AM"<<endl;
        if(s[0]=='1' and s[1]=='1') cout<<"11:"<<s[3]<<s[4]<<" AM"<<endl;
        if(s[0]=='1' and s[1]=='2') cout<<"12:"<<s[3]<<s[4]<<" PM"<<endl; //
        if(s[0]=='1' and s[1]=='3') cout<<"01:"<<s[3]<<s[4]<<" PM"<<endl;
        if(s[0]=='1' and s[1]=='4') cout<<"02:"<<s[3]<<s[4]<<" PM"<<endl;
        if(s[0]=='1' and s[1]=='5') cout<<"03:"<<s[3]<<s[4]<<" PM"<<endl;
        if(s[0]=='1' and s[1]=='6') cout<<"04:"<<s[3]<<s[4]<<" PM"<<endl;
        if(s[0]=='1' and s[1]=='7') cout<<"05:"<<s[3]<<s[4]<<" PM"<<endl;
        if(s[0]=='1' and s[1]=='8') cout<<"06:"<<s[3]<<s[4]<<" PM"<<endl;
        if(s[0]=='1' and s[1]=='9') cout<<"07:"<<s[3]<<s[4]<<" PM"<<endl; //
        if(s[0]=='2' and s[1]=='0') cout<<"08:"<<s[3]<<s[4]<<" PM"<<endl;
        if(s[0]=='2' and s[1]=='1') cout<<"09:"<<s[3]<<s[4]<<" PM"<<endl;
        if(s[0]=='2' and s[1]=='2') cout<<"10:"<<s[3]<<s[4]<<" PM"<<endl;
        if(s[0]=='2' and s[1]=='3') cout<<"11:"<<s[3]<<s[4]<<" PM"<<endl;
        if(s[0]=='2' and s[1]=='4') cout<<"12:"<<s[3]<<s[4]<<" PM"<<endl;
       
        
    }

    return 0;
}