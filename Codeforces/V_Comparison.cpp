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
    char s[10];
    cin.getline(s,100);

    if(s[0]>s[5]){
        if(s[3]=='>'){
        cout<<"Right"<<endl;
    }
    else cout<< "Wrong" <<endl;
    }
    else if(s[0]<s[5]){
        if(s[3]=='<'){
        cout<<"Right"<<endl;
    }
    else cout<< "Wrong" <<endl;
    }
    else {
        if(s[3]=='>'){
        cout<<"Right"<<endl;
    }
    else cout<< "Wrong" <<endl;
    }
    
    return 0;
}