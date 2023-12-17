#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;

    if (year % 4 == 0) {
        if ((year % 400 == 0) or (year % 100 != 0)) {
            cout << "1\n";
        } else {
            cout << "0\n";
        }
    } else {
        cout << "0\n";
    }

    return 0;
}