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
        int n;
        string s;
        cin>>n>>s;
        int cnt=0,freq [26]={0};

        for(int i=0;i<s.size();i++){
            freq[s[i]-'A']++;
        }
    
          for(int i=0;i<26;i++){
            if(freq[i]>=i+1) cnt++;
        }

        cout<<cnt<<endl;
    }
    return 0;
}