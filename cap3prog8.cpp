#include <iostream>
using namespace std;

/**problema Cap3Prog8
 * Encontrar el area de cualquier rectangulo con la formula
 * Area =lw, donde l es la longitud y w es el ancho/
 * */

//@Author   LeoMerc
//@Date     3/20/2022

int main()
{
    double area, l, w;
    cout << "Ingrese la longitud del rectangulo: " << endl;
    cin >> l;
    cout << "Ingrese el ancho del rectangulo: " << endl;
    cin >> w;
    area = l * w;
    cout << "El Area del rectangulo es: " << area;
}
