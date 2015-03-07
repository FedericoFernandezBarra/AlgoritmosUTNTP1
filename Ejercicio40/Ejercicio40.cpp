#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

void separarfecha(long fecha, int& dia, int& mes, int& anio)
{
    anio = fecha/10000;
    mes = (fecha - anio*10000)/100;
    dia = (fecha - anio * 10000 - mes * 100);
}

int main(int argc, char *argv[])
{
    long f;
    int d, m, a;
    cout << "Ingrese fecha (aaaammdd): ";
    cin >> f;
    separarfecha (f, d, m, a);
    cout << "Dia: " << d << " Mes: " << m << " Anio: " << a;
    getch();
    return 0;
}