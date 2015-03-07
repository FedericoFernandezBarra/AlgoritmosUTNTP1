#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
    int n, a = 0, b = 1, c;
    cout << "Ingrese un numero: ";
    cin >> n;
    cout << "1";
    for (int i = 0; i < n-1; i++)
    {
      c = a+b;
      cout << " "<< c;
      a = b;
      b = c;   
    }
    getch();
    return 0;
}
