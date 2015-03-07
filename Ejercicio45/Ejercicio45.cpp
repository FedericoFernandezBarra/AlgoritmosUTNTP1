#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

double pow (double x, double y)
{
       double potencia = 1;
       for (int i = 0; i < y; i++)
       {
           potencia = potencia * x;
       } 
       return potencia;
}

int main(int argc, char *argv[])
{
    double a, b;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;
    cout << endl << a << " elevado a la " << b << " = " << pow (a,b);
    getch();
    return 0;
}
