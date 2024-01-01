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
        getline(cin,s);
        sort(s.begin(),s.end());
       int sz= unique(s.begin(),s.end())-s.begin();
       int cnt=0;
       for(int i=0;i<sz;i++){
        if(isalpha(s[i])) cnt++;
       }
        cout<<cnt;

    return 0;
}