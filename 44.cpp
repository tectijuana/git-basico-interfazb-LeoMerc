#include <iostream>
using namespace std;

/**problema 44
 * Pretende depositar $1000 en una cuenta de ahorros y dejarlos durante 10 anios acumulando intereses,
 * el banco A compone el interes en sus cuentas de ahorros anualmente;
 * en B semestralmente; el C trimestralmente y el D mensualmente.
 *  Los bancos A y B pagan tasas de interes del 6.25%; el C, 6% y el D 5.75%
 * Donde le convendria a Emma depositar su dinero?
 * */

//@Author   LeoMerc
//@Date     3/20/2022

double AnualA(double deposito, int anios, double tasaAB)
{
    double interes;
    tasaAB = tasaAB / 100;

    for (int x = 0; x < anios; x++)
    {

        interes = deposito * tasaAB;
        deposito += interes;
    }
    return deposito;
}

double SemestralB(double deposito, int anios, double tasaAB)
{
    double interes;
    tasaAB = tasaAB / 100;
    int semestres = anios * 2;

    for (int x = 0; x < semestres; x++)
    {

        interes = deposito * tasaAB;
        deposito += interes;
    }
    return deposito;
}

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

double MensualD(double deposito, int anios, double tasaD)
{
    double interes;
    tasaD = tasaD / 100;
    int mensualmente = anios * 12;

    for (int x = 0; x < mensualmente; x++)
    {

        interes = deposito * tasaD;
        deposito += interes;
    }
    return deposito;
}

int main()
{
    double deposito = 1000, tasaAB = 6.25, tasaC = 6, tasaD = 5.75;
    int anios = 10;
    double finalA, finalB, finalC, finalD;

    int pos = 0;
    double mayor = 0;
    string mensaje;
    finalA = AnualA(deposito, anios, tasaAB);
    cout << finalA << endl;

    finalB = SemestralB(deposito, anios, tasaAB);
    cout << finalB << endl;

    finalC = TrimestralC(deposito, anios, tasaC);
    cout << finalC << endl;

    finalD = MensualD(deposito, anios, tasaD);
    cout << finalD << endl;

    double arreglo[4] = {finalA, finalB, finalC, finalD};
    for (int x = 0; x < 4; x++)
    {

        if (mayor < arreglo[x])
        {
            mayor = arreglo[x];

            pos = x;
        }
    }

    switch (pos)
    {
    case 0:
        mensaje = "El banco A es el mas conveniente";
        break;

    case 1:
        mensaje = "El banco B es el mas conveniente";
        break;

    case 2:
        mensaje = "El banco C es el mas conveniente";
        break;

    case 3:
        mensaje = "El banco D es el mas conveniente";
        break;

    default:
        break;
    }

    cout << mensaje << endl;
}
