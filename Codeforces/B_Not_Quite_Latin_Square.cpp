#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();
    int t;
    cin >> t;
    while(t--) {
        int a=0,b=0,c=0;
       char s[3][3];
       for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>s[i][j];
            if(s[i][j]=='A') a++;
           else if(s[i][j]=='B') b++;
            else c++;
        }
       }
    if(a==2) cout<<"A"<<endl;
  else if(b==2) cout<<"B"<<endl;
    else cout<<"C"<<endl;

    }
    return 0;
}
