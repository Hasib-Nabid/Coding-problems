#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    char s1[100123];
    while( cin.getline(s1,1000001)){
    sort(s1,s1+strlen(s1));
    for(int i=0;i<strlen(s1);i++){
        if(s1[i]!=' ') cout<<s1[i];
    }
    cout<<endl;
    }
    return 0;
}
