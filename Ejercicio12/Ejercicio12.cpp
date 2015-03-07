#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
    int edad;
    cout << "Ingrese la edad: ";
    cin >> edad;
    if(edad <= 12)
    {
             cout << "Menor";   
    }
    else
    {
        if(edad >= 13 && edad <=18)
        {
                cout << "Cadete";
        }
        else
        {
            if(edad >= 19 && edad <=26)
            {
                    cout << "Juvenil";
            }
            else
            {
                    cout << "Mayor";   
            }
        }
    }
    getch();
    return 0;
}
