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
        int n,x;
        cin>>n;
        int a[n];
        int freq[102]={0};
        for(int i=0;i<n;i++) {
            cin>>a[i];
            freq[a[i]]++;
        }
         for(int i=0;i<102;i++){
            if(freq[i]==1) x=i;
         }
         for(int i=0;i<n;i++) {
           if(a[i]==x) {
            cout<<i+1<<endl;
            break;
        }
    }
    }
    return 0;
}