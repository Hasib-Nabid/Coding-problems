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
        int n,cnt=0;
        string s;
        cin>>n>>s;
       bool flag=false;
        for(int i=0;i<s.size();i++){
            if(s[i]=='.') cnt++;

            if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.'){
                cout<<"2"<<endl;
                flag=true;
                break;
            }
        }
    if(!flag)  cout<<cnt<<endl;
        }
    return 0;
}