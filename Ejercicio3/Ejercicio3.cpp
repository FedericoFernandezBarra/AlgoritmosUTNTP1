#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(int argc, char** argv)
{
    float a;
    cout << "Ingrese un numero: ";
    cin >> a;
    cout << a << " / 5 = " << a/5 << endl;
    cout << "Resto de " << a << " / 5 = " << fmod(a,5) << endl;
    cout << "(" << a << " / 5)/ 7 = " << a/5/7;
    getch();
    return 0;
}

