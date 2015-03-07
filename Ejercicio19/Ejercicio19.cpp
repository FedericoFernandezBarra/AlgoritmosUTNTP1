#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[])
{
    int m, num = 1, i = 0;
    cout << "Ingrese cantidad de multiplos de 3 pero no de 5 que quieres ver: ";
    cin >> m;
    while (i < m)
    {
        if(num%3 == 0 && num%5 != 0)
        {
            cout << num << endl;
            i++;
        }
        num++;
    }
    getch();
    return 0;
}
