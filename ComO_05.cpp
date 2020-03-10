#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n, now = 0;
    cin >> n;
    stack<pair<int, int>> airport;
    for (int i = 0; i < n; ++i) {
        int x, y;
        pair<int, int> plane;
        cin >> x >> y;
        if (now < x) {
            now = x;
        }

    }
    return 0;
}