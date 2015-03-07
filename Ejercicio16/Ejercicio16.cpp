#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char** argv)
{
    int cont = 1, contavg, num;
    long sum;
    float avg;
    while (cont <= 50)
    {
        cout << "Ingrese un numero (" << cont << "): ";
        cin >> num;
        if (num > 100)
        {
            avg = avg + num;
            contavg++;
        }
        if (num < -10)
        {
            sum = sum + num;
        }
        cont++;
    }
    cout << "Promedio de los numeros mayores a 100: " << avg/contavg << endl << "Sumatoria de los menores a -10: " << sum;
    getch();
    return 0;
}

