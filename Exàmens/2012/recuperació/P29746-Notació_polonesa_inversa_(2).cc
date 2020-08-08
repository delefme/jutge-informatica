#include <stack>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int convert(char c) {
    return int(c - '0');
}

int main() {
    string s;
    int n;
    cin >> n;
    for (int j = 0; j < n; j++) {
        char c;
        stack<int> expresio;
        bool end = false;
        while (not end and cin >> c) {
            if (c >= '0' and c <= '9') expresio.push(convert(c));
            else if (c == 'F') end = true;
            else if (c == '-') {
				int k = -expresio.top();
				expresio.pop();
				expresio.push(k);
			}
			else {
                int x = expresio.top();
                expresio.pop();
                int y = expresio.top();
                expresio.pop();
                if (c == '+') expresio.push(x+y);
                else if (c == '*') expresio.push(x*y);
            }
        }
        cout << expresio.top() << endl;
        end = false;
    }
}
