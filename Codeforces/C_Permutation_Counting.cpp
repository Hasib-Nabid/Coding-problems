#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    
    for (int t = 0; t < test_cases; ++t) {
        int a;
        cin >> a;
        
        vector<int> arr(a);
        map<int, int> mp;
        for (int i = 0; i < a; ++i) {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        
        sort(arr.begin(), arr.end());
        
        int prev = 0;
        for (int i = 0; i < a; ++i) {
            if (arr[i] - prev > 1) {
                prev = arr[i];
                break;
            }
            
            if (mp.size() % 2 == 0) {
                cout << "Bob" << endl;
                break;
            }
        }
        
        if (prev == 0 || prev != arr[a - 1])
            cout << "Alice" << endl;
    }
    
    return 0;
}
