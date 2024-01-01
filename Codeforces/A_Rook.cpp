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
        char c=s[0];
        int a=s[1]-'0';
        for(int i='a';i<'i';i++){
            if(c!=i) cout<<(char)i<<a<<endl;
        }
         for(int i=1;i<9;i++){
            if(a!=i) cout<<c<<i<<endl;
        }
        cout<<endl;
    }
    return 0;
}