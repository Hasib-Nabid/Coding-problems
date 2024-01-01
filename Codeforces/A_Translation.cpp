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
        string s1,s2;
        cin>>s1>>s2;
        
        int i=0,j=s2.size()-1;
        while(i<j){
            char temp=s2[i];
            s2[i]=s2[j];
            s2[j]=temp;
            i++;
            j--;
        }
        bool flag=true;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]) flag=false;
        }

        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    return 0;
}