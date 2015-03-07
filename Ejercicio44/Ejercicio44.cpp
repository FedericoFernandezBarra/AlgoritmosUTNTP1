#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

float calcularPorcentajeDiferencia(long a, long b)
{
      return ((b-a)*100)/a+b;
}

int main(int argc, char *argv[])
{
    long num1, num2;
    cout << "Ingrese dos numeros: ";
    cin >> num1 >> num2;
    cout << endl << "Su porcentaje de diferencia es: " << calcularPorcentajeDiferencia(num1, num2);
    getch();
    return 0;
}
