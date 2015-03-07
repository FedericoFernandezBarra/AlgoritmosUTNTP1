#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
    int num = 1, cantcon = 1, cont = 0, min = 32767, max = 0, pos, mcon;
    float sum = 0;
    while (num > -1)
    {
          cout << "Ingrese un numero(0 para terminar subconjunto, negativo para terminar conjunto): ";
          cin >> num;
          if(num < 1)
          {
            cout << "Minimo del subconjunto: " << min << endl;
            cout << "Promedio del subconjunto: " << sum/cont << endl;
            sum = 0;
            min = 32767;
            cont = 0;
            cantcon++;
          }
          else
          {
               sum = sum + num;
               cont++;
               if (num < min)
               {
                min = num;
               }
               if (num > max)
               {
                max = num;
                pos = cont;
                mcon = cantcon;
               }
          }      
    }
    cout << "Maximo del conjunto: " << max << " Conjunto: " << mcon << " Posicion: " << pos;
    getch();
    return 0;
}
