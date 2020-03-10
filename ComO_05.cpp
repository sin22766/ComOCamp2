#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int main() {
    int n, maxT = 0;
    cin >> n;
    int in[n], out[n];
    stack<pair<int, int>> airport;
    for (int i = 0; i < n; ++i) {
        int x, y;
        pair<int, int> plane;
        cin >> x >> y;
        if (maxT < x || maxT < y) {
            maxT = max(x, y);
        }

    }
    return 0;
}