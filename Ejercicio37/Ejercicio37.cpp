#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int mcd (int a, int b)
{
    int r = 1;
    while (r != 0)
    {
          r = a%b;
          if(r==0)
          {
               return b;
          }
          else
          {    
                a = b;
                b = r;
          }
    }
}

int main(int argc, char *argv[])
{
    int num1, num2;
    cout << "Ingrese dos numeros: ";
    cin >> num1 >> num2;
    cout << endl << "El MCD es: " << mcd(num1, num2);
    getch();
    return 0;
}
