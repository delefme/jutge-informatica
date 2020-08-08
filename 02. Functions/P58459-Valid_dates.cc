#include <iostream>
using namespace std;

bool is_leap_year(int year) {
    if (year%100 == 0) {
            if ((year/100)%4 == 0) return true;
            return false;
	}
	else {
		if (year%4 == 0) return true;
		return false;
	}
}


bool is_valid_date(int d, int m, int y) {
    if (m <= 0 or m > 12 or d > 31 or d <= 0) return false; //té sentit independentment del mes?
    //tenint en compte els mesos
    if (m%2 == 1 and m <= 7) { //mesos amb 31 dies fins el juliol
        if (d <= 0 or d > 31) return false; 
        return true;
    }
    if (m%2 == 0 and m >= 8) { //mesos amb 31 dies a partir de l'agost
        if (d <= 0 or d > 31) return false;
        return true;
    }
    if (m == 2) { //el febrer peculiar
        if (is_leap_year(y) == false) {
            if (d <= 0 or d > 28) return false; //any amb 28 dies al febrer
            return true;
        }
        if (d <= 0 or d > 29) return false; //any amb 29 dies al febrer
        return true;
        
    }
    if (d <= 0 or d > 30) return false; 
    return true;    
    
}

int main() {
    int d, m, y;
    cin >> d >> m >> y;
    cout << is_valid_date(d, m, y) << endl;
}
