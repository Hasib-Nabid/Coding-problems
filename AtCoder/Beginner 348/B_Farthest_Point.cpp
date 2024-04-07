#include<bits/stdc++.h>
using namespace std;

#define int long long
#define float double
#define endl '\n'
#define pb push_back
#define po pop_back
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define shesh cout << endl
#define loop(i,n) for (int i =0; i < (n); ++i)
#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
typedef vector<int> vi;
int gcd ( int a, int b ) { return __gcd ( a, b ); }
int lcm ( int a, int b ) { return a * ( b / gcd ( a, b ) ); }
const double PI = acos(-1);
#define nabidtheboss() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define w(t) int t; cin >> t; cin.ignore(); while (t--) 



double distance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

int farthest_point(const vector<pair<int, int>>& points, int current_point_id) {
    double max_distance = -1;
    int farthest_point_id = -1;
    
    for (int i = 0; i < points.size(); ++i) {
        if (i == current_point_id) {
            continue;
        }
        
        double dist = distance(points[current_point_id].first, points[current_point_id].second, points[i].first, points[i].second);
        if (dist > max_distance) {
            max_distance = dist;
            farthest_point_id = i;
        }
    }
    
    return farthest_point_id + 1; 
}

int32_t main () 
{

    nabidtheboss();
    int N;
    cin >> N;
    
    vector<pair<int, int>> points(N);
    for (int i = 0; i < N; ++i) {
        cin >> points[i].first >> points[i].second;
    }
    
   
    for (int i = 0; i < N; ++i) {
        int farthest = farthest_point(points, i);
        cout << farthest << endl;
    }

    return 0;
}
