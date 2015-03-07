#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char** argv)
{
    int a, b, c;
    cout << "Ingrese tres valores: ";
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << "Mayor: " << a << endl;
        if (b > c)
        {
            cout << "Medio: " << b << endl;
            cout << "Menor: " << c << endl;
        }
        else
        {
            cout << "Medio: " << c << endl;
            cout << "Menor: " << b << endl;
        }
    }
    else
    {
        if (b > a && b > c)
        {
            cout << "Mayor: " << b << endl;
            if (a > c)
            {
                cout << "Medio: " << a << endl;
                cout << "Menor: " << c << endl;
            }
            else
            {
                cout << "Medio: " << c << endl;
                cout << "Menor: " << a << endl;
            }
        } else
        {
            if (a > b)
            {
                cout << "Medio: " << a << endl;
                cout << "Menor: " << b << endl;
            }
            else
            {
                cout << "Medio: " << b << endl;
                cout << "Menor: " << a << endl;
            }
        }
    }
    getch();
    return 0;
}

