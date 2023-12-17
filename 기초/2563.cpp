#include <iostream>
#include <vector>
using namespace std;

int main() {
    bool filled[100][100];
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            filled[i][j] = false;
        }
    }

    int n, answer = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int input_x, input_y;
        cin >> input_x >> input_y;

        for (int x = input_x; x < input_x + 10; x++) {
            for (int y = input_y; y < input_y + 10; y++) {
                if (!filled[x][y]) {
                    filled[x][y] = true;
                    answer++;
                }
            }
        }
    }

    cout << answer << "\n";
    return 0;
}