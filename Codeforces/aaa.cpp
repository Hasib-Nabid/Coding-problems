#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main() {
    optimize();
    string s, ans;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        int a = s[i] - '0';
        if (a > 4) {
            ans +=(9 - a + '0');
        } else {
            ans += (a + '0');
        }
    }

    if (ans[0] == '0') ans[0] = s[0];
    cout << ans;
    return 0;
}
