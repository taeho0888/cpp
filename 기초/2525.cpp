#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B;
    cin >> C;

    B += C;
    A += (B / 60);
    B = (B % 60);

    cout << A % 24 << " " << B << "\n";
    return 0;
}