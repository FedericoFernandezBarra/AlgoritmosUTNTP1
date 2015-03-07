#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

bool esprimo(int n)
{
     int i = 1, cantdiv = 0;
     while(i <= n)
     {
             if(n%i==0)
             {
                       cantdiv++;
             }
             i++;
     }
     if(cantdiv <= 2)
     {
                return true;
     }
     return false;
}

int main(int argc, char *argv[])
{
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    if(esprimo(num))
    {
        cout << "Es primo";              
    }
    else
    {
        cout << "No es primo";
    }
    getch();
    return 0;
}
