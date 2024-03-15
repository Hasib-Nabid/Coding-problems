#include<bits/stdc++.h>
using namespace std;

int main()
{
   char s;
   cin>>s;
if(isalpha(s)) {
    if(islower(s)) {
        cout<<"ALPHA"<<endl;
        cout<<"IS SMALL"<<endl;
    }
    else {
        cout<<"ALPHA"<<endl;
        cout<<"IS CAPITAL"<<endl;
    }
}
   else if(isdigit(s)) cout<<"IS DIGIT"<<endl;
    return 0;
}