#include <iostream>
#include <math.h>
#include <string>

using namespace std;

/**problema 52
 * Maria compra su despensa semanaria en el supermercado.
 * Sean X el valor total de su compra y Y es el dinero que entrega
 * a la cajera. Calcular el numero de billetes y de monedas que
 * recibe como cambio (la diferencia entre X y Y).
 * */

//@Author   LeoMerc
//@Date     3/20/2022

int main()
{
    int m1, m2, m5, m10, b20, b50, b100, b200, b500;
    int X, Y, final = 0, cantidadb, cantidadm;
    cout << "Ingrese valor total de la compra: ";
    cin >> X;
    cout << "Ingrese dinero entregado a cajera: ";
    cin >> Y;
    if (X > Y)
    {
        cout << "No le alcanzo para pagar";
    }

    else
    {
        X = X * -1;
        final = X + Y;
        b500 = final / 500;
        final = final % 500;
        b200 = final / 200;
        final = final % 200;
        b100 = final / 100;
        final = final % 100;
        b50 = final / 50;
        final = final % 50;
        b20 = final / 20;
        final = final % 20;
        m10 = final / 10;
        final = final % 10;
        m5 = final / 5;
        final = final % 5;
        m2 = final / 2;
        final = final % 2;
        m1 = final / 1;
        final = final % 1;

        cout << "billetes de 500: "
             << b500 << endl
             << "billetes de 200: "
             << b200 << endl
             << "billetes de 100: "
             << b100 << endl
             << "billetes de 50: "
             << b50 << endl
             << "billetes de 20: "
             << b20 << endl
             << "monedas de 10: "
             << m10 << endl
             << "monedas de 5: "
             << m5 << endl
             << "monedas de 2: "
             << m2 << endl
             << "monedas de 1: "
             << m1 << endl;

        cantidadb = b500 + b200 + b100 + b50 + b20;
        cantidadm = m10 + m5 + m2 + m1;

        cout << "Cantidad de billetes: "
             << cantidadb << endl
             << "Cantidad de monedas: "
             << cantidadm << endl;
    }
}
