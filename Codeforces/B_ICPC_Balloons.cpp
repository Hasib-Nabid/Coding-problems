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
        cin>>n;
        string s;
            cin>>s;
            if(n==1) {
            cout<<"2"<<endl;
        }

       else{ 
        sort(s.begin(),s.end());
        int point=2;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]!=s[i+1]) point+=2;
            else point+=1;
        }
        cout<<point<<endl;
       }
    }
    return 0;
}