#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int calcularBilletes (int& monto, int denom)
{
    int cant = monto/denom;
    monto = monto%denom;
    return cant;
}

int main(int argc, char *argv[])
{
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    cout << calcularBilletes(num, 100) << " billetes de $100 | ";
    cout << calcularBilletes(num, 50) << " billetes de $50 | ";
    cout << calcularBilletes(num, 20) << " billetes de $20 | ";
    cout << calcularBilletes(num, 10) << " billetes de $10 | ";
    cout << calcularBilletes(num, 5) << " billetes de $5 | ";
    cout << calcularBilletes(num, 2) << " billetes de $2 | ";
    cout << calcularBilletes(num, 1) << " billetes de $1 | ";
    getch();
    return 0;
}
