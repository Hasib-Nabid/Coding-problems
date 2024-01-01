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
        string s;
        cin>>t>>s;
        int r=0,g=0,b=0,max=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='R' && s[i+1]=='R'){
                r++;
                g=0;
                b=0;
                max++;
                }
         else if(s[i]=='G' && s[i+1]=='G'){
                g++;
                r=0;
                b=0;
                max++;
                }
          else if(s[i]=='B' && s[i+1]=='B'){
                b++;
                g=0;
                r=0;
                max++;
                }
        }
        cout<<max<<endl;

    return 0;
}