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
    while (t--)
    {   
        int n;
        string s;
        cin>>n>>s;
        if (n!=5) cout<<"NO"<<endl;
        else {sort(s.begin(),s.end());
        string s1="Timru";
        bool flag=true;
        for(int i=0;i<5;i++){
            if(s[i]!=s1[i]) flag=false;
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    }
    return 0;
}