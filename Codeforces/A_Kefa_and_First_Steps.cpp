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
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int cnt=1,max=1;

    for(int i=0;i<n-1;i++){
        if(a[i]<=a[i+1]){
        cnt++;
        if(cnt>max){
            max=cnt;
        }
        }
        else cnt=1;
    }
    cout<<max;
    return 0;
}