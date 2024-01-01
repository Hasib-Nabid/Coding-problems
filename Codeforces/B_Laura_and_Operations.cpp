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
        int a,b,c;
        cin>>a>>b>>c;
        int mx=max({a,b,c});
        if(a==b==c) cout<<1<<" "<<1<<" "<<1<<endl;
        else if(a==b && a>c) cout<<1<<" "<<1<<" "<<0<<endl;
        else if(b==c && b>a) cout<<0<<" "<<1<<" "<<1<<endl;
        else if(a==c && a>b) cout<<1<<" "<<0<<" "<<1<<endl;

        else if(a==b && a<c) cout<<0<<" "<<0<<" "<<1<<endl;
        else if(b==c && b<a) cout<<1<<" "<<0<<" "<<0<<endl;
        else if(a==c && a<b) cout<<0<<" "<<1<<" "<<0<<endl;
        else if(mx==a) cout<<1<<" "<<0<<" "<<0<<endl;
        else if(mx==b) cout<<0<<" "<<1<<" "<<0<<endl;
        else if(mx==c) cout<<0<<" "<<0<<" "<<1<<endl;
        else cout<<0<<" "<<0<<" "<<0<<endl;
    }
    return 0;
}