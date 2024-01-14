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
        ll sum=0;
        int n;
        cin>>n;
        int a[n];
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            pq.push(a[i]);
    }

        while(pq.size()>1){
            ll a=pq.top();
            pq.pop();
            ll b=pq.top();
            pq.pop();
            sum+=a+b;
            pq.push(a+b);
    }
    cout<<sum<<endl;
    }
    return 0;
}