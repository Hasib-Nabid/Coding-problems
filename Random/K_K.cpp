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
int temp=n;
int a= temp/100;
int b= (temp/10)%10;
int c=temp%10;
while(1){
    if(a*b==c) {
        cout<<n;
        break;
    }
    else ++n;
}

    return 0;
}