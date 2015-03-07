#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char** argv)
{
    int fecha, dia, mes, anio;
    cout << "Ingrese una fecha (formato aaaammdd): ";
    cin >> fecha;
    anio = fecha/10000;
    mes = (fecha - anio*10000)/100;
    dia = (fecha - anio * 10000 - mes * 100);
    cout << "Dia: " << dia << "  Mes: " << mes << "  Anio: " << anio;
    getch();
    return 0;
}

