#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool isGroupWord(const string& word) {
    vector<bool> visited(26, false);

    for (int i = 0; i < word.length(); i++) {
        char currentChar = word[i];
        if (visited[currentChar - 'a']) {
            return false;
        }
        visited[currentChar - 'a'] = true;
        
        while (i + 1 < word.length() && currentChar == word[i + 1]) {
            i++;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    int groupWordCount = 0;
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;

        if (isGroupWord(word)) {
            groupWordCount++;
        }
    }

    cout << groupWordCount << "\n";
    return 0;
}