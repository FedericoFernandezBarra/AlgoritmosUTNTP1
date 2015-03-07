#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
    float num=1, maxneg=-32767, minpos=32767, minrang = 27, sum = 0, cont = 0;
    while(num != 0)
    {
              cout << "Ingrese un numero: ";
              cin >> num;
              if (num !=0)
              {
                      if (num < 0 && num > maxneg)
                      {
                         maxneg = num;      
                      }
                      if(num > 0 && num < minpos)
                      {
                         minpos = num;
                      }
                      if (num >= -17.3 && num <= 26.9 && num < minrang)
                      {
                         minrang = num;
                      }
                      sum = sum + num;
                      cont++;
              }
    }
    cout << "Maximo negativo: " << maxneg << endl;
    cout << "Minimo positivo: " << minpos << endl;
    cout << "Minimo entre -17-3 y 26.9: " << minrang << endl;
    cout << "Promedio: " << sum/cont;
    getch();
    return 0;
}
