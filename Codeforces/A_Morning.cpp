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
        int ans=0;
    int a=s[0]-'0';
    int b=s[1]-'0';
    int c=s[2]-'0';
    int d=s[3]-'0';

    if(a==0) a=10;
    if(b==0) b=10;
    if(c==0) c=10;
    if(d==0) d=10;

    ans+=abs(a-1)+1;
    ans+=abs(b-a)+1;
    ans+=abs(c-b)+1;
    ans+=abs(d-c)+1;
    printf("%d\n",ans);
     }   
    return 0;
}