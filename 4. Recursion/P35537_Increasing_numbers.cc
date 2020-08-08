#include <iostream>
using namespace std;


bool is_increasing(int n) {
    if (n == 0) return true;
    if (n%10 < (n/10)%10) return false;
    if (n%10 >= (n/10)%10) return is_increasing(n/10);

}
int main() {
    int n;
    while (cin >> n) cout << (is_increasing(n) ? "true" : "false") << endl;
}
