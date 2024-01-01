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
        string s;
        cin>>s;
        int sum1=0,sum2=0;
        for(int i=0;i<3;i++){
            sum1+=s[i]-'0';
        }
        for(int i=3;i<6;i++){
            sum2+=s[i]-'0';
        }
        if(sum1==sum2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}