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
    int n;
    cin>>n;
    vector<string>rat,woman,man,captain;
    for(int i=0;i<n;i++){
        string s1,s2;
        cin>>s1>>s2;
    if(s2=="rat") rat.push_back(s1);
  else if(s2=="woman" || s2=="child") woman.push_back(s1);
   else if(s2=="man") man.push_back(s1);
   else if(s2=="captain") captain.push_back(s1);
    }

    for(auto u:rat) cout<< u <<endl;
    for(auto v:woman) cout<< v <<endl;
    for(auto w:man) cout<< w <<endl;
    for(auto x:captain) cout<< x <<endl;
    return 0;
}