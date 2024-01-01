#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int t;
    cin >> t;
    while(t--) {
        long long sum=0;
       int n;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++) {
        cin>>a[i];
        sum+=a[i];
        }

        if(sqrt(sum)==(int) sqrt(sum)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
