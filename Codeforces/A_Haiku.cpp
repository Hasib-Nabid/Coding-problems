#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

bool isvowel(char s){
    if(s=='a' || s=='e' || s=='i' || s=='o' || s=='u') return true;
    return false;
}
int main()
{
    optimize();
    // string s1,s2,s3;
    // getline(cin,s1);
    // getline(cin,s2);
    // getline(cin,s3);
    // int c1=0,c2=0,c3=0;
    // for(int i=0;i<s1.size();i++){
    //     if(isvowel(s1[i])) c1++;
    // }
    // for(int i=0;i<s2.size();i++){
    //     if(isvowel(s2[i])) c2++;
    // }
    // for(int i=0;i<s3.size();i++){
    //     if(isvowel(s3[i])) c3++;
    // }

    // if(c1==5 && c2==7 && c3==5) cout<<"YES"<<endl;
    // else cout<<"NO"<<endl;

    // return 0;


    vector<string>v;
    int arr[3]={5,7,5};
    for(int i=0;i<3;i++){
    string s;
    getline(cin,s);
    v.push_back(s);
    }
    for(int i=0;i<3;i++){
        int cnt=0;
        
    for(auto x: v[i]){
        if(isvowel(x)) cnt++;
    }
    if(cnt!=arr[i]) {
       return cout<<"NO"<<endl,0;
    }
    }
    cout<<"YES"<<endl;
    return 0;
}