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

        string s;
        cin>>s;

     int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        int z=0,o=0;
        for(int i=l-1;i<=r-1;i++){
            if(s[i]=='0') z++;
            else o++;
        }
        int ans=min(o,z)*2;
        cout<<ans<<endl;



    }
    return 0;
}