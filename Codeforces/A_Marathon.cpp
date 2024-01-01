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
     vector<int>v(4);
    for(int i=0;i<4;i++) cin>>v[i];
    int cnt=0;
    for(int i=1;i<4;i++) {
        if(v[i]>v[0]) cnt++;
    }
    cout<<cnt<<endl;

    }
    return 0;
}