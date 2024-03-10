#include<bits/stdc++.h>
using namespace std;

#define nabidtheboss() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define w(t) int t; cin >> t; cin.ignore(); while (t--) 

int main()
{
    nabidtheboss();
    w(t){
        int n;
        cin>>n;
        int a[n];
        for(auto &u:a) cin>>u;
        sort(a,a+n);
        cout<<abs(a[0]-a[n-1])<<endl;
    }

    return 0;
}