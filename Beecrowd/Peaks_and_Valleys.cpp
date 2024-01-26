#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> heights(N);

    for (int i = 0; i < N; ++i) {
        cin >> heights[i];
    }

    // Check if the landscape has the Nlogony pattern
    int pattern = 1;  // Assume the pattern is present

    for (int i = 2; i < N; i += 2) {
        if ((heights[i] > heights[i - 1] && heights[i - 1] > heights[i - 2]) ||
            (heights[i] < heights[i - 1] && heights[i - 1] < heights[i - 2])) {
            // The current set of three measures doesn't follow the pattern
            pattern = 0;
            break;
        }
    }

    cout << pattern << endl;

    return 0;
}
