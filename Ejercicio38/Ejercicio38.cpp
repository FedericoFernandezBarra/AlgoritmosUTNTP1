#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int factorial(int n)
{
    int fact = 1;
    while (n > 1)
    {
          fact = fact * n;
          n--;
    }
    return fact;
}
int main(int argc, char *argv[])
{
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    cout << factorial(num);
    getch();
    return 0;
}
