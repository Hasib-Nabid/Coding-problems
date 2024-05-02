#include <bits/stdc++.h>
using namespace std;
int decimal(string &s){
    int n=0;
    for(int i=s.size()-1;i>=0;i--){
       if(s[i]=='1') n+=(pow(2,i));
    }
    return n;
}
#define w(t)      \
    int t;        \
    cin >> t;     \
    cin.ignore(); \
    while (t--)



int32_t main()
{
    w(t)
    {
        int n, k;
        cin >> n >> k;
        vector<string> v(n);
        for(int i=0;i<n;i++) cin >> v[i];
        set<int>s;

           for(int i=0;i<n;i++) {
            int a=decimal(v[i]);
            int x=__lg(a);
            if(x!=0){
            s.insert(x);
        }
        }
if(s.size()==k)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
    }

    return 0;
}
