#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(4);
    double inte; 
    string tip;
    cin >> inte >> tip;
    int cops;
    if (tip == "semestral") cops = 2;
    else if (tip == "trimestral") cops = 4;
    else if (tip == "mensual") cops = 12;
    else cops = 52;
    inte = inte/(100*cops);
    double suma = inte + 1;
    for (int i = 1; i < cops; i++) {
        suma += suma*inte;
    }
    suma = (suma - 1)*100;
    cout << suma << endl;
}
