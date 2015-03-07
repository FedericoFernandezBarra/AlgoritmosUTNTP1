#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

bool esMultiplo(int a, int b)
{
     if (a%b==0)
     {
         return true;
     }
     else
     {
         return false;
     }
 }

int main(int argc, char *argv[])
{
    int num1, num2;
    cout << "Ingrese dos numeros: ";
    cin >> num1 >> num2;
    if(esMultiplo(num1, num2))
    {
          cout << num1 << " es multiplo de " << num2;
    }
    else 
    {
          cout << num1 << " no es multiplo de " << num2;
    }
    getch();
    return 0;
}
