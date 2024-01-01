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
    int t;
    cin>>t;
    while(t--){
        int t;
        string s;
        cin>>t>>s;
        int zero=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0') {
                zero++;
                break;
            }
        }
        if(zero) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
     
    }
    return 0;
}