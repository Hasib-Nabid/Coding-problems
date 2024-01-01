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

    if(s1[0]=='A' && s1[1]=='>' && s1[2]=='B' &&  s2[0]=='C' && s2[1]=='<' && s2[2]=='B' && s3[0]=='A' && s3[1]=='>' && s3[2]='C') cout<<"CBA"<<endl;

    


    return 0;
}