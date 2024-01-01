#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,copy,word1,word2;
    getline(cin,s);
    copy=s;
    stringstream ss(s);
    
    int cnt=0;
    while(ss>>word1){
        cnt++;
    }

    stringstream sss(copy);
    while(sss>>word2){
        reverse(word2.begin(),word2.end());
        if(cnt==1) cout<<word2;
      else {
        cout<<word2<<" ";
       cnt--;
      }
    }

    return 0;
}