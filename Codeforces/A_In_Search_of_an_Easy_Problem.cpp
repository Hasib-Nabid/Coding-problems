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
    int arr[n];
    bool flag=true;
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++) {
        if(arr[i]==1) {
            flag=false;
            break;
        }
    }
    if(flag) cout<<"EASY"<<endl;
    else cout<<"HARD"<<endl;
    return 0;
}