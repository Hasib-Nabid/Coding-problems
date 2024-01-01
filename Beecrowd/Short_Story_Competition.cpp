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
    int n,l,c;
    while(cin>>n>>l>>c){
    int cnt=0;
    string s;
    cin.ignore();
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        cnt++;
    }
    int ans=ceil (cnt*1.0/(l*c));
    cout<<ans<<endl;
    }
    return 0;
}