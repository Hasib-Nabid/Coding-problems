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
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) {
        ll sum=0;
        for(int j=0;j<n;j++){
            if(a[i]<a[j]) sum+=a[j];
        }
        cout<<sum<<" ";
    }
    return 0;
}