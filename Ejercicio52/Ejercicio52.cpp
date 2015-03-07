#include <cstdlib>
#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
    int x1, x2, y1, y2, cantrec=0;
    for(int i = 0; i < 20; i++)
    {  
            cout << "Ingrese x1, y1, x2, y2: ";
            cin >> x1 >> y1 >> x2 >> y2;
            if(abs(x2-x1)==abs(y2-y1))
            {
                  cout << "Es un cuadrado, su perimetro es: " << abs(x1+x2+y1+y2) << endl;                          
            }
            else
            {
                  cantrec++;   
            }
    }
    cout << endl << "Cantidad de rectangulos que no son cuadrados: " << cantrec << endl;
    getch();
    return 0;
}
