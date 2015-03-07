#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

double Factorial(int n)
{
    double fact = 1;
    while (n > 1)
    {
          fact = fact * n;
          n--;
    }
    return fact;
}

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
    int num, cantmult1 = 0, cantmult2 = 0;
    while (num !=0)
    {
          
          cout << "\nIngrese un numero (0 para terminar): ";
          cin >> num;
          cout << Factorial(num);
          if (esMultiplo(num, 3) && esMultiplo(num, 5) && esMultiplo(num, 7))
          {
               cantmult1++;
          }
          if (esMultiplo(num, 3) && esMultiplo(num, 5))
          {
              cantmult2++;
          }
          
    }
    cout << endl << "Cantidad de multiplos de 3, 5 y 7: " << cantmult1;
    cout << endl << "Cantidad de multiplos de 3 y 5: " << cantmult2;
    getch();
    return 0;
}
