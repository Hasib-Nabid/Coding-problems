#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    long long x,s=1;
    cin>>x;
    while(x>1)
    {
        if(x%2==0)
            x/=2;
        else
        {
            s++;
            x--;
            x/=2;
        }
    }
    cout<<s<<endl;
    

    return 0;
}