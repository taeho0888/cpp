#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    int answer = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'c') {
            if (i + 1 < str.size()) {
                if (str[i + 1] == '=' || str[i + 1] == '-') {
                    i++;
                }
            }
        } else if (str[i] == 'd') {
            if (i + 2 < str.size()) {
                if (str[i + 1] == 'z' && str[i + 2] == '=') {
                    i += 2;
                }
            }
        } else if (str[i] == 'l') {
            if (i + 1 < str.size() && str[i + 1] == 'j') {
                i++;
            }
        } else if (str[i] == 'n') {
            if (i + 1 < str.size() && str[i + 1] == 'j') {
                i++;
            }
        } else if (str[i] == 's') {
            if (i + 1 < str.size() && str[i + 1] == '=') {
                i++;
            }
        } else if (str[i] == 'z') {
            if (i + 1 < str.size() && str[i + 1] == '=') {
                i++;
            }
        } else if (str[i] == '=' || str[i] == '-') {
            continue;
        }
        answer++;
    }

    cout << answer << "\n";
    return 0;
}