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
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        ll sum=0;
        sum=a+b+c+d;
        if(sum%3==0 && sum/3 >= a && sum/3>=b && sum/3>=c) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}