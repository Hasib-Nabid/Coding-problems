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
            int n,k;
            cin>>n>>k;
            string s;

            cin>>s;
            int freq[30]={0};
        for(int i=0;i<n;i++){
            freq[s[i]-'a']++;
        }
        int cnt=0;
        for(int i=0;i<26;i++){
            if (freq[i]%2==1) cnt++;
           }

           if((cnt-1)<=k){
            cout<<"YES"<<endl;
           }
           else cout<<"NO"<<endl;
        }
    return 0;
}