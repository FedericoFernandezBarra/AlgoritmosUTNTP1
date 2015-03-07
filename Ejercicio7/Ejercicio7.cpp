#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char** argv)
{
    int d, m, a;
    cout << "Ingrese dia: ";
    cin >> d;
    cout << "Ingrese mes: ";
    cin >> m;
    cout << "Ingrese anio: ";
    cin >> a;
    cout << "aaaammdd: " << a*10000 + m*100 + d;
    getch();
    return 0;
}

