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
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    sort(v.begin(),v.end());
  int sz= unique(v.begin(),v.end()) -v.begin(); 
   if(sz<=1) cout<<"NO"<<endl;
   else cout<<v[1]<<endl;
    return 0;
}