#include <iostream>
using namespace std;

int avaluar() {
    char op;
    cin >> op;
    if (op >= '0' and op <= '9') return op - '0';
    else {
        int x = avaluar();      //1er operand
        int y = avaluar();    //2on operand
        if (op == '+') return x+y;
        else if (op == '-') return x - y;
        else return x * y;
    }
}

int main() {
    cout << avaluar() << endl;
}
