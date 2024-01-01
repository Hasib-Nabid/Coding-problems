#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,word;
    getline(cin,s);
    stringstream ss(s);
    int cnt=0;
    while(ss>>word){
        if(word[0]!='.' || word[0]!='?' || word[0]!='!')
        cnt++;
    }
    cout<<cnt;
    return 0;
}