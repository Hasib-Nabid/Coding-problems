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
     int year;
    cin>>year;
        while(1){
            year++;
            int a,b,c,d;
            a=year/1000;
            b=(year/100)%10;
            c=(year/10)%10;
            d=year%10;

        if(a!=b && b!=c && c!=d && d!=a && d!=b && a!=c){
            cout<<year<<endl;
            break;
        }
        }   
    return 0;

}