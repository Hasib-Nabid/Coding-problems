#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,word;
    getline(cin,s);
    string s2="Jessica";
    bool flag=false;
    stringstream ss(s);
    while(ss>>word){
        if(word==s2){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}