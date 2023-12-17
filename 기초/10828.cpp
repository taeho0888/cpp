#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<int> stack;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string command;
        cin >> command;

        // push        
        if (command == "push") {
            int num;
            cin >> num;
            stack.push_back(num);
        } else if (command == "pop") {
            if (stack.empty()) {
                cout << "-1\n";
            } else {
                cout << stack.back() << "\n";
                stack.pop_back();
            }
        } else if (command == "size") {
            cout << stack.size() << "\n";
        } else if (command == "empty") {
            cout << stack.empty() << "\n";
        } else {
            if (stack.empty()) {
                cout << "-1\n";
            } else {
                cout << stack.back() << "\n";
            }
        }
    }

    return 0;
}