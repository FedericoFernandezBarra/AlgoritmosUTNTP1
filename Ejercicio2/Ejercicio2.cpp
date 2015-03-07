#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char** argv)
{
    float a,b;
    cout << "Ingrese dos valores: ";
    cin >> a >> b;
    if (b==0)
    {
        cout << a << " / " << b << " = ERROR";
    }
    else
    {
        cout << a << " / " << b << " = " << a/b;
    }
    getch();
    return 0;
}

