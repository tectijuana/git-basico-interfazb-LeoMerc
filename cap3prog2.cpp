#include <iostream>
using namespace std;

/**problema Cap3Prog2
 * Dada una medida angular mayor que 0 pero menor que 180,
 * clasificar el angulo como obtuso, recto o agudo.
 * */

//@Author   LeoMerc
//@Date     3/20/2022

int main()
{
    double angulo;
    cout << "Ingrese un angulo desde 0 a 180: ";
    cin >> angulo;

    if (angulo > 0 && angulo < 90)
    {
        cout << "El angulo que ingreso es agudo";
    }

    else if (angulo == 90)
    {
        cout << "El angulo que ingreso es recto";
    }

    else if (angulo > 90 && angulo < 180)
    {
        cout << "El angulo que ingreso es obtuso";
    }

    else
    {
        cout << "No ingreso un angulo valido";
    }
}
