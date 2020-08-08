#include <iostream>
#include <vector>
using namespace std;


int position(double x, const vector<double>& v, int left, int right) {
    if (left > right) return -1;
    else {
        int i = (left + right)/2;
        if (x < v[i]) return position(x, v, left, i-1);
        else if (x > v[i]) return position(x, v, i+1, right);
        return i;
    }
}


int main() {
    int n;
    while (cin >> n) {
        vector<double> V(n);
        for (int i = 0; i < n; ++i) cin >> V[i];
        int t;
        cin >> t;
        while (t--) {
            double x;
            int left, right;
            cin >> x >> left >> right;
            cout << position(x, V, left, right) << endl;
        }
    }
}
