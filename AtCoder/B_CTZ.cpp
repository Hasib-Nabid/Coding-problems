#include<bits/stdc++.h>
using namespace std;

int main()
{
        int t,c=0,mx=0;
        cin>>t;
        int temp=t;
        string s;
        while(temp!=0){
         s+= to_string(temp%2);
            temp=temp/2;
        }
        for(auto u:s){
            if(u=='0') {
                c++;
               if(c>mx){
                mx=c;
               }
            }
            else{
                break;
            }
        }
        cout<<mx<<endl;
    return 0;
}