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
    string target="hello";
    
    int j=0,cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==target[j]){
            cnt++;
            j++;
            if(cnt==5) cout<<"YES"<<endl;
        }
    }
    if(cnt!=5) cout<<"NO"<<endl;
    return 0;
}