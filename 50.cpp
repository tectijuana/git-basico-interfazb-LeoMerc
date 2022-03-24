#include <iostream>
#include <math.h>
using namespace std;

/**problema 50
 * Muchos bancos calculan intereses trimestralmente.
 * Mostrar la diferencia entre invertir 200 al 6%
 * compuesto trimestralmente e invertirlos al
 * 6.25% compuestos anualmente, por un periodo
 * de 25 anios.
 * */

//@Author   LeoMerc
//@Date     3/20/2022

double TrimestralC(double deposito, int anios, double tasaC)
{
    double interes;
    tasaC = tasaC / 100;
    int trimestres = anios * 4;

    for (int x = 0; x < trimestres; x++)
    {

        interes = deposito * tasaC;
        deposito += interes;
    }
    return deposito;
}

double AnualA(double deposito, int anios, double tasaD)
{
    double interes;
    tasaD = tasaD / 100;

    for (int x = 0; x < anios; x++)
    {

        interes = deposito * tasaD;
        deposito += interes;
    }
    return deposito;
}

int main()
{
    double deposito = 200, tasaC = 6, tasaD = 6.25;
    int anios = 25;
    double finalC, finalD;

    finalC = TrimestralC(deposito, anios, tasaC);
    cout << finalC << endl;

    finalD = AnualA(deposito, anios, tasaD);
    cout << finalD << endl;

    if (finalC > finalD)
    {
        cout << "Es mejor invertir por trimestres a una tasa de 6%";
    }

    if (finalC < finalD)
    {
        cout << "Es mejor invertir anualmente a una tasa de 6.25%";
    }
}
