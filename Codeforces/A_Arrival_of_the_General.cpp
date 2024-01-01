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
    int n,cnt=0,mx=0,mn=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) {
        if(a[i]>mx) mx=a[i];
        if(a[i]<mn) mn=a[i];
    }

int i=0,j=n-1;
while(a[0]!=mx && a[n-1]!=mn){
    swap(a[i],a[j]);
    i++;
    j--;
    cnt++;
}
    
    cout<<cnt;

    return 0;
}