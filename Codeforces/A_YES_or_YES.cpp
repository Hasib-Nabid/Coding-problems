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
        string s,ans="YES";
        cin>>s;
        for(int i=0;i<3;i++){
            if(islower(s[i])) s[i] = toupper(s[i]);
        }
       if(s==ans) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
    return 0;
}