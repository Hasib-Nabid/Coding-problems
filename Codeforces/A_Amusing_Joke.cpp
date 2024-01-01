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
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    s1+=s2;
    bool flag=true;
    int freq1[26]={0};
    int freq2[26]={0};
    for(int i=0;i<s1.size();i++){
        freq1[s1[i]-'A']++;
    }
        for(int i=0;i<s3.size();i++){
        freq2[s3[i]-'A']++;
    }
        for(int i=0;i<s3.size();i++){
        if(freq1[i]!=freq2[i]) flag=false;
    }
    if(flag) cout<<"YES";
    else cout<<"NO";
    return 0;
}