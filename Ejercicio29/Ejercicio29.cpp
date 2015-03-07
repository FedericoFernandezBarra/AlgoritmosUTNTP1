#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

void romano(int& n, int lim, string rom)
{
     if(n  >= lim)
     {
          cout << rom;
          n = n - lim;
     }
}

int main(int argc, char *argv[])
{
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    romano(num, 1000, "M");
    romano(num, 1000, "M");
    romano(num, 1000, "M");
    romano(num, 900, "CM");
    romano(num, 500, "D");
    romano(num, 400, "CD");
    romano(num, 100, "C");
    romano(num, 100, "C");
    romano(num, 100, "C");
    romano(num, 90, "XC");
    romano(num, 50, "L");
    romano(num, 40, "XL");
    romano(num, 10, "X");
    romano(num, 10, "X");
    romano(num, 10, "X");
    romano(num, 9, "IX");
    romano(num, 5, "V");
    romano(num, 4, "IV");
    romano(num, 1, "I");
    getch();
    return 0;
}
