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

        int arr[a];
        for(int i=0;i<a;i++) cin>>arr[i];
        int width=0;
        for(int i=0;i<a;i++)
        {
            if(arr[i]>b){
                width+=2;
            }
            else width++;
        }

        cout<<width<<endl;

    return 0;
}