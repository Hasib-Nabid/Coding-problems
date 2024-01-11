#include<bits/stdc++.h>
using namespace std;

int main()
{
    
        int t;
        cin>>t;
         cin.ignore();
        while(t--){
            int ans=0;
            bool flag=true;
            int n,x;
            cin>>n>>x;
             cin.ignore();
            string s;
          getline(cin,s);


            for(int i=0;i<s.size();i++) {
               if(s[i]=='1'){
                ans=x;
               }
               else{
                ans--;
                if(ans<0) flag=false;
               }
            }
            if(flag) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    return 0;
}