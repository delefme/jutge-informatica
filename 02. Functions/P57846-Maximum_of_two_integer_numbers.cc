#include <iostream>
using namespace std;

int max2(int a, int b) {
    if (a < b) return b;
    return a;
}
int main() {
    int a, b;
    cin >> a >> b;
    cout << max2(a,b) << endl;
}
