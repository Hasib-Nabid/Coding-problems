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
    string s,ans;
    cin>>s;
   for(int i=0;i<s.size();i++){
    if(s[i]=='-' && s[i+1]=='.'){
    ans+='1';
    i++;
    }
    else if(s[i]=='-' && s[i+1]=='-') {
        ans+='2';
        i++;
    }
     else if(s[i]=='.') ans+='0';
   }
   cout<<ans<<endl;
    return 0;
}