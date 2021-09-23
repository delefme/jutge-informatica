#include <iostream>

using namespace std;

int main(){
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;

    //son iguales si los extremos son iguales
    if(a1 == a2 and b1 == b2)  cout << "= , ";
    //esta uno incluido en el otro cuando uno de los dos tiene
    //el minimo mas pequeño y el maximo mas grande
    else if(a1<=a2 and b1>=b2) cout << "2 , ";
    else if(a1>=a2 and b1<=b2) cout << "1 , ";
    else cout << "? , ";

    //calculamos los limites del intervalo interseccion
    int x,y;
    //el izquierdo es el maximo de los limites izquierdos
    if(a1>a2) x = a1;
    else x = a2;
    //el derecho es el minimo de los limites derechos
    if(b1<b2) y = b1;
    else y = b2;

    //comprobamos que el intervalo no sea vacio viendo si el extremo
    //izquierdo esta a la izquierda del derecho
    if(x<=y) cout << "[" << a << "," << b << "]" << endl;
    else cout << "[]" << endl;
}
