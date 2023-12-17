#include <iostream>
using namespace std;

int main() {
    int A, B, C, result;
    cin >> A >> B >> C;

    // 3개 다 같은 경우
    if ((A == B) and (B == C)) {
        result = 10000 + A*1000;
    }
    // 2개만 같은 경우
    else if ((A == B) and (B != C)) {
        result = 1000 + A*100;
    }
    else if ((A == C) and (A != B)) {
        result = 1000 + A*100;
    }
    else if ((B == C) and (A != B)) {
        result = 1000 + B*100;
    }
    // 다 다른 경우
    else {
        result = max(max(A, B), C)*100;//A, B, C의 최댓값
    }

    cout << result << "\n";
    return 0;
}