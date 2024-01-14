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
        int n,one=INT_MIN,two=INT_MAX;
        int sum;
        cin>>n;
      vector<int>v;
        for(int i=0;i<n;i++){
          int a,x;
            cin>>a>>x;
        if(a==1){
          one=max(one,x);
        }
        else if(a==2){
         two=min(two,x);
        }
        else v.push_back(x);
            }
         sum=two-one+1;
        if(one>two) cout<<"0"<<endl;
        else{
            for(auto u:v){
                if(u>=one && u<=two){
                    --sum;
                }
            }
            cout<<sum<<endl;
        }
        // cout<<one<<" "<<two<<endl;
        }
    
    return 0;
}