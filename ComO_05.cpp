#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> all_plane;
    vector<pair<int, int>> airport;
    stack<pair<int, int>> runway;
    for (int i = 0; i < n; ++i) {
        pair<int, int> plane;
        cin >> plane.first >> plane.second;
        all_plane.push_back(plane.first);
        all_plane.push_back(plane.second);
        airport.push_back(plane);
    }
    sort(all_plane.begin(), all_plane.end(), greater<int>());
    for (int i: all_plane) {
        for (int j = 0; j < airport.size(); ++j) {

        }
        if (airport.) {

        }
    }
    return 0;
}