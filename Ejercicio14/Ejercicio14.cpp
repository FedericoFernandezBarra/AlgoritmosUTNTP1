#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
    int a, b, cont = 0;
    double sum = 0;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;
    while (cont < b)
    {
          sum = sum + a;
          cont++;
    }
    cout << a << " x " << b << " = " << sum;
    getch();
    return 0;
}
