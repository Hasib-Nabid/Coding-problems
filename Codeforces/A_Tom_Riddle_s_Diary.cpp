#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();
    int n;
    cin>>n;
     vector<string>v(n);
     map<string,int>mp;

     for(int i=0;i<n;i++) {
        cin>>v[i];
        if(mp[v[i]]==0){
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
        }
        mp[v[i]]++;
     }
    return 0;
}

// int n;
//     cin >> n;
 
//     map<string, bool> vis;
 
//     while ( n-- ) {
//         string s;
//         cin >> s;
//         if ( vis[s] == 1 ) cout << "YES\n";
//         else cout << "NO\n";
 
//         vis[s] = 1;
//     }