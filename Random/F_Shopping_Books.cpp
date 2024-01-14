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
        int n,x;
        cin>>n>>x;
        vector<int>v1,v2,v3(1,0);
        for(auto &u:v1) cin>>u;
        for(auto &u:v2) cin>>u;
        for(int i=0;i<v1.size()-1;i++){
            for(int j=i+1;j<v1.size();j++){
                if(v1[i]+v2[j]>=x){
                    v3.push_back(v2[i]+v2[j]);
                }
            }
        }
        cout<<*max_element(v3.begin(),v3.end())<<endl;
    return 0;
}