#include<bits/stdc++.h>
using namespace std;

int main()
{
    
        int t;
        cin>>t;
         cin.ignore();
        while(t--){
            int c=0;
            bool flag=false;
            string s;
          getline(cin,s);
            for(int i=0;i<s.size();i++) {
                if(s[i]=='W' || s[i]==' '){
                     if(s[i]=='W'){
                        c++;
                     }
                  if(c==3){ 
                    flag=true;
                  break;
                  }
                }
                else c=0;
                }
            if(flag) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    return 0;
}