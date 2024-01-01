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
    if(n<3) {
        cout<<"0"<<endl;
        return 0;
    }
    int arr[n];
    int freq[4];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        freq[arr[i]]++;
    }

        int a=freq[1];
        int b=freq[2];
        int c=freq[3];
        int ans=min({a,b,c});
        cout<<ans<<endl;
        if(!ans) return 0;

        vector<int>x,y,z;
   for(int i=0;i<n;i++){
    if(arr[i]==1) x.push_back(i+1);
    if(arr[i]==2) y.push_back(i+1);
    if(arr[i]==3) z.push_back(i+1);
   }

        for(int i=0;i<ans;i++){
            cout<<x[i]<<" "<<y[i]<<" "<<z[i]<<endl;
            }

    return 0;
}