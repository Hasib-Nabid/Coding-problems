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
        
        if(k==n-1){
            for(int i=1;i<=n;i++){
                cout<<i<<" ";
                if(i==n) cout<<endl;
            } 
        }
      else if(k==0){
            for(int i=n;i>=1;i--) {
                cout<<i<<" ";
            if(i==1) cout<<endl;
            }
        }

      else{ 
        for(int i=1;i<=k;i++){
            cout<<i<<" ";
      }
         for(int j=n;j>=k+1;j--){
              cout<<j<<" ";
              if(j==k+1) cout<<endl;
            } 
        }
    }
    return 0;
}