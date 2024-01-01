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
    bool flag=true;
     if(islower(s[0])){
      for(int i=1;i<s.size();i++){
         if(!isupper(s[i])) flag=false;
      }
     }
  
      else if(isupper(s[0])){
      for(int i=1;i<s.size();i++){
         if(!isupper(s[i])) flag=false;
      }
     }
   
     if(flag){
      for(int i=0;i<s.size();i++){
         if(islower(s[i]))  s[i]=toupper(s[i]);
        else s[i]=tolower(s[i]);
      }
     }
    

    cout<<s<<endl;
    return 0;
}