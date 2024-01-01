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
        int capital=0,lower=0;
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z'){
                lower++;
            }
        else if(s[i]>='A' && s[i]<='Z'){
                capital++;
            }
        }

        if(lower>capital || lower==capital){
            for(int i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i]+=32;
            }
        }
        }
       else if(lower<capital){
            for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z'){
                s[i]-=32;
            }
        }
       }
    cout<<s<<endl;
    return 0;
}