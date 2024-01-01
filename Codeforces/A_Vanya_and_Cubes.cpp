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
    ll sum=0,i=1,cnt=0;
    while(1){
        sum+=i;
        if(sum>n) {
            cout<<cnt<<endl;
            return 0;
        }
        else cnt++;
        i++;
    }
    return 0;
}