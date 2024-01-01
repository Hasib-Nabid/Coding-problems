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
            string s1,s2;
            cin>>s1>>s2;
            cout<<s1<<endl;
            cout<<s2<<endl;
            for(int i=0;i<s1.size();i++){
                if(s1[i]==s2[i]) cout<<".";
                else cout<<"*";
            }
            cout<<endl<<endl;
        }
    return 0;
}