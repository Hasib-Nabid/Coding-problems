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
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string a,b;
        bool flag=false;
        a+=s[0];
 
        for(int i=1;i<s.size();i++){
            if(s[i]!='0' || flag) {
                b+=s[i];
                flag=true;
        }
        else a+=s[i];
        }
      if(b.size()==0) b+='0';
      int x=stoi(a);
      int y=stoi(b);

       if(y>x && x!=0 && y!=0) cout<<x<<" "<<y<<endl;
       else cout<<"-1"<<endl;
    }
    return 0;
}