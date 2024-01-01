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
    ll sum=0,cnt=0;
    cin>>n;
   vector<int>v(n);
   for(int i=0;i<n;i++) {
    cin>>v[i];
    sum+=v[i];
   }
  
    sort(v.rbegin(),v.rend());

    int ans=0;
    
        for(int i=0;i<n;i++){
          if(ans>sum/2) break;
            ans+=v[i];
            cnt++;
        }
        cout<<cnt<<endl;
    return 0;
}