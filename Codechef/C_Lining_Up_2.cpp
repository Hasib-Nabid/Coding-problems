#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector< pair<int,int> > p(n);
    for(int i = 0; i < n; i++){
        cin >> p[i].first;
        p[i].second = i+1; 
    }
    sort(p.begin(), p.end());

    for(auto u : p){
        cout << u.second << " ";
    }

    cout << endl;
    return 0;
}
