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
        int a,b;
        cin>>a>>b;
        if(a==b) cout<<"O JOGO DUROU 24 HORA(S)"<<endl;
        else if(a>b) cout<< "O JOGO DUROU " << ((24+b)-a)<<" HORA(S)" <<endl;
        else if(b>a) cout<< "O JOGO DUROU " << b-a<<" HORA(S)" <<endl;

    return 0;
}