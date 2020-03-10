#include <iostream>
#include <stack>

using namespace std;

struct Queue {
    stack<int> s1, s2;

    void enq(int value) {
        while (!s1.empty()) {
            cout << "move 1 2\n";
            s2.push(s1.top());
            cout << s1.top() << "\n";
            s1.pop();
        }
        cout << "push 1\n";
        s1.push(value);
        while (!s2.empty()) {
            cout << "move 2 1\n";
            s1.push(s2.top());
            cout << s2.top() << "\n";
            s2.pop();
        }
    }

    int deq() {
        if (s1.empty()) {
            exit(0);
        }
        int x = s1.top();
        cout << "pop 1\n";
        cout << x << endl;
        s1.pop();
        return x;
    }
};

int main() {
    int command;
    cin >> command;
    return 0;
}
