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
    int t,s1=0,s2=0,turn=0;
    cin>>t;
    int a[t];
    int i=0,j=t-1;
    for(int i=0;i<t;i++) cin>>a[i];
    
   while(i<=j){
    if(turn==0){
        if(a[i]>a[j]){
            s1+=a[i];
            i++;
            turn=1;
        }
          else{
            s1+=a[j];
            j--;
            turn=1;
        }
    }
    else {  
        if(a[i]>a[j]){
            s2+=a[i];
            i++;
            turn=0;
        }
          else{
            s2+=a[j];
            j--;
            turn=0;
        }
    }
   }
    cout<<s1<<" "<<s2;
    return 0;
}