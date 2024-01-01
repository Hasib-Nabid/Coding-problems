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
    string s,s1="WUB";
    cin>>s;

    while(s.find(s1)!=-1){
        s.replace(s.find(s1),3," ");
    }
    for(int i=0;i<s.size();i++){
        if(s[i]==' ' && s[i+1]==' '){
            s.erase(i,1);
        }
    }
    cout<<s;
    return 0;
}