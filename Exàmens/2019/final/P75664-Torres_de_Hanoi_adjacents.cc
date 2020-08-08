#include <iostream>
using namespace std;


void hanoi(int n, char begin, char mid, char end) {
    string mov = " => ";
    if (n == 1) {
        cout << begin << mov << mid << endl;
        cout << mid << mov << end << endl;
    }
    else {
        hanoi(n-1, begin, mid, end);        //movem n-1 fins al final
        cout << begin << mov << mid << endl;  //movem la de sota al mig
        hanoi(n-1, end, mid, begin);             //movem n-1 a l'inici
        cout << mid << mov << end << endl;      //movel la de sota al final
        hanoi(n-1, begin, mid, end);            //movem n-1 fins al final
    }
}
    


int main() {
    int n;
    while (cin >> n) {
        hanoi(n, 'A', 'B', 'C');
        cout << "----------" << endl;
    }
}
