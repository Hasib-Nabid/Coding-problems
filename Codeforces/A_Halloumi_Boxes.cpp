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
        int n,k;
        cin>>n>>k;
        int a[n];
        bool flag=true;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n-1;i++) {
            if(a[i]>a[i+1]){
             flag=false; 
             break;
        }
    }
    if(flag || k>1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}