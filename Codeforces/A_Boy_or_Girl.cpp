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
    string s;
    cin>>s;
    int freq[26]={0};

    for(int i=0;i<s.size();i++){
        freq[s[i]-'a']++;
    }

    int cnt=0;
    for(int i=0;i<26;i++){
        if(freq[i]>0){
            cnt++;
    }
    }

     if(cnt%2==0) cout<<"CHAT WITH HER!"<<endl;
    else if(cnt%2==1) cout<<"IGNORE HIM!"<<endl;
    return 0;
}