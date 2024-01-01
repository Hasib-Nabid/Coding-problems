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
        int n,minus=0,zero=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) {
            cin>>a[i];
            if(a[i]<0) minus++;
            else if(a[i]==0) zero++;
        }
        if(zero+minus==0){
            cout<<"1"<<endl;
            cout<<"1"<<" "<<"0"<<endl;
        }
        else if(zero>0 || (minus%2==1)){
            cout<<"0"<<endl;
        }
        else if(minus%2==0){
             cout<<"1"<<endl;
            cout<<"1"<<" "<<"0"<<endl;
        }
    }
    return 0;
}