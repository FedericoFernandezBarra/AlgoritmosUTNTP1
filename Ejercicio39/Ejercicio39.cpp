#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

long unificarfecha(int dia, int mes, int anio)
{
     return anio*10000 + mes*100 + dia;
}

int main(int argc, char** argv)
{
    int d, m, a;
    cout << "Ingrese dia: ";
    cin >> d;
    cout << "Ingrese mes: ";
    cin >> m;
    cout << "Ingrese anio: ";
    cin >> a;
    cout << unificarfecha(d, m, a);
    getch();
    return 0;
}
