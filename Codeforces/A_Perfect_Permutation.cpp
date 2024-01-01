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
    if(n%2==1) {
    cout<<"-1"<<endl;
    return 0;
    }

    for(int i=1;i<=n;i++){
    if(i%2==0) cout<<i<<" "<<i-1<<" ";
    }
    return 0;
}