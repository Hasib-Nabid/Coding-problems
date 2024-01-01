#include<bits/stdc++.h>
using namespace std;

int main() {
    int m,n;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    vector<int>v;
    bool flag=false;
        for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           if(a[i][j]==42){
               if(a[i][j-1]==7 && a[i][j+1]==7 && a[i-1][j-1]==7 && a[i-1][j]==7 && a[i-1][j+1]==7 && a[i+1][j-1]==7 && a[i+1][j]==7 && a[i+1][j+1]==7){
                   flag=true;
                   v.push_back(i);
                   v.push_back(j);
               }
           }
        }
    }
    
    if(flag) cout<<v[0]+1<<" "<<v[1]+1;
    else cout<<"0"<<" "<<"0";
    return 0;
}