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
    bool flag=false;
    for(int i=0;i<s.size()-2;i++){
        if(s[i]=='C' and s[i+1]=='O' and s[i+2]=='V') 
        {
            flag=true;
            break;
        }
    }
    if(flag) cout<<"Veikur="<<endl;
    else cout<<"Ekki veikur="<<endl;
    return 0;
}