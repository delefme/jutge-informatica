#include <iostream>
#include <string>
#include <vector>
using namespace std;


void reverse_word(const string& s) {
    int n = s.size();
    for (int i = n - 1; i >= 0; i--) cout << s[i];
    cout << endl;
}

int main() {
    string word;
    int m;
    cin >> m;
    vector<string> words(m);
    for (int j = m - 1; j >= 0; j--) {
        cin >> word;
        words[j] = word; 
    }
    for (int i = 0; i < m; i++) reverse_word(words[i]);
}
