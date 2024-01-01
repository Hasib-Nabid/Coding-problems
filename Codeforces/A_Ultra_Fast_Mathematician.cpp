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
    string s1,s2,ans;
    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++){
        if(s1[i]==s2[i]){
            ans+='0';
        }
        else ans+='1';
    }
    cout<<ans;
    return 0;
}