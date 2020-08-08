#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    while (cin >> word) {
        int n = word.size();
        for (int i = n - 1; i >= 0; i--) cout << word[i];
        cout << endl;
    }
}

