#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    double fact = 1;
    cout << "Ingrese un numero: ";
    cin >> n;
    while (n > 1)
    {
          fact = fact * n;
          n--;
    }
    cout << "Factorial: " << fact;
    getch();
    return 0;
}
