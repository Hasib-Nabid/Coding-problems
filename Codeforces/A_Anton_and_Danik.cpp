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
    int n;
    string s;
    cin>>n>>s;
    int a=0,d=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A') a++;
        else d++;
    }
    if(a>d) cout<<"Anton"<<endl;
    else if(d>a) cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;
    return 0;
}