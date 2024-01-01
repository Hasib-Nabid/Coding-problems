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
            string a,b;
            cin>>a>>b;
            reverse(a.begin(),a.end());
            reverse(b.begin(),b.end());
            int x=stoi(a);
            int y=stoi(b);
            int z=x+y;
            string c=to_string(z);
            int ans;
            reverse(c.begin(),c.end());
            for(int i=0;i<c.size();i++){
                    if(c[0]=='0') {
                        ans=c.back()-'0';
                        break;
            }
            }
            ans=stoi(c);
            cout<<ans<<endl;
        }
    return 0;
}