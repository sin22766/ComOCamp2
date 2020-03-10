#include <iostream>
#include <stack>

using namespace std;

struct Queue {
    stack<int> s1, s2;

    void enq(int value) {
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(value);
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }

    void deq() {

    }
};

int main() {
    int command;
    cin >> command;
    return 0;
}
