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
    int num, cantprimo=0, cont = 1;
    cout << "Cantidad de n primos: ";
    cin >> num;
    while(cantprimo < num)
    {
       if(esprimo(cont))
       {
          cout << cont << endl;
          cantprimo++;
          cont++;
       }
       else
       {
           cont++;
       }
    }
    getch();
    return 0;
}
