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
        int a,t;
        cin>>a>>t;
        string s;
        cin>>s;
        while(t--){
            for(int i=0;i<s.size();i++){
                if(s[i]=='B' && s[i+1]=='G'){
                    s[i]='G';
                    s[i+1]='B';
                    i++;
                }
            }
        }
        cout<<s<<endl;
    return 0;
}