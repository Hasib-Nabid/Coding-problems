#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);


bool cmp(const pair<int,int>&p1,const pair<int,int>&p2){
    if(p1.first>p2.first) return 1;
    else if (p1.first==p2.first) return(p1.second<p2.second);
    else return 0;
}
int main()
{
    optimize();
    int n,k,ans=0;
    cin>>n>>k;
    vector<pair<int,int>>v(n);

    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }

    sort(v.begin(),v.end(),cmp);

        for(int i=0;i<n;i++){
        if(v[i]==v[k-1]) ans++;
    }
    cout<<ans<<endl;
    
    return 0;
}