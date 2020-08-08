#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    while (cin >> n and n != 0) {
        int max = 0;
        string par;
        vector <string> entrada(n);
        for (int l = 0; l < n; l++) cin >> entrada[l];
        sort(entrada.begin(), entrada.end());
        for (int i = 0; i < n; i++) {
            int compt = 1;
            while (i < n-1 and entrada[i+1] == entrada[i]) {
                i++;
                compt++;
            }
            if (max <= compt) {
                max = compt;
                par = entrada[i];
            }
        }
        cout << par << endl;
    }
}
