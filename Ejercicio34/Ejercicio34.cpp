#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
    float num = 0, ant = -32767, cantcero = 0, sumneg = 0, cantpos = 0, sumpos = 0;
    for (int i = 0; i < 169 ; i ++)
    {
       
        if (cantcero > 3)
        {
           break;
        }
        if (sumpos/cantpos > 6 && i != 1)
        {
           break;
        }
        cout << "Ingrese un numero: ";
        cin >> num;
        if (num < 0)
        {
                sumneg = sumneg + num;
        }
        else
        {
         if (num == 0)
         {
                cantcero++;
         }
         else
         {
           sumpos = sumpos + num;
           cantpos++;   
         }
        }
        if (num == ant)
        {
           break;
        }
        ant = num;
    }
    cout << endl << "Cantidad de ceros: " << cantcero;
    cout << endl << "Promedio de valores positivos: " << sumpos/cantpos;
    cout << endl << "Sumatoria de valores negativos: " << sumneg;
    getch();
    return 0;
}
