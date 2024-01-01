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
        string s,s1="codeforces";
        cin>>s;
        int cnt=0;
        for(int i=0;i<10;i++){
            if(s[i]!=s1[i]) cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}