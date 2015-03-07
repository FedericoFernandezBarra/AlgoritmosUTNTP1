#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char** argv)
{
    int a,b;
    cout << "Ingrese dos valores: ";
    cin >> a >> b;
    if (a > b)
    {
        cout << "El mayor es: " << a;
    }
    else
    {
        cout << "El mayor es: " << b;
    }
    getch();
    return 0;
}
