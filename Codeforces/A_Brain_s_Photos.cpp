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
    int m,n;
    cin>>m>>n;
    char s[m][n];
    bool flag=true;
    
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>s[i][j];
    }
    }

    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
       if(s[i][j]!='W' && s[i][j]!='B' && s[i][j]!='G'){
        flag=false;
        break;
       }
    }
    }

    if(flag) cout<<"#Black&White"<<endl;
    else cout<<"#Color"<<endl;
    return 0;
}