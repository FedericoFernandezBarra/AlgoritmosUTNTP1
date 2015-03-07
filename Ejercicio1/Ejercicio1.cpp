#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char** argv)
{
    int a,b;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;
    cout << a << " + " << b << " = " << a+b << endl;
    cout << a << " - " << b << " = " << a-b << endl;
    cout << a << " * " << b << " = " << a*b << endl;
    getch();
    return 0;
}
