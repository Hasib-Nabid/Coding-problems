#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);


bool vowel(char s){
    if(s=='a' || s=='e') return true;
    else return false;
}

bool cons(char s){
    if(s=='b' || s=='c' || s=='d') return true;
    else return false;
}
int main()
{
    optimize();
     int t,cnt=0;
    cin >> t;
    while(t--) {
        int n;
        string s,ans;
        cin>>n>>s;
        bool flag=false;
        for(int i=0;i<s.size();i++){
           if( vowel(s[i])){
            ans+=s[i];
           if(vowel(s[i+2]) && i!=s.size()-1) ans+='.';
           }
           else{
            ans+=s[i];
               if(vowel(s[i+2]) && i!=s.size()-1) ans+='.';
           }
        }
        cout<<ans<<endl;
    }

    
    return 0;
}