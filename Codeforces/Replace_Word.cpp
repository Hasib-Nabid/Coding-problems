#include<bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin>>t;
        while(t--){
        string s,s2;
        cin>>s>>s2;
        int sz=s2.size();
        while(s.find(s2)!=-1){
            s.replace(s.find(s2),sz,"#");
        }

        cout<<s<<endl;
        }
    return 0;
}