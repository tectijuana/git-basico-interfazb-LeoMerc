#include <iostream>
#include <math.h>
#include <string>

using namespace std;

/**problema cap3prog20
 * Introducir las longitudes de los 3
 * lados de un triangulo y determinar el area
 * */

//@Author   LeoMerc
//@Date     3/20/2022

int main()
{
    int b, h, area;
    cout << "Ingrese la base del triangulo: " << endl;
    cin >> b;
    cout << "Ingrese la altura: " << endl;
    cin >> h;

    area = (b * h) / 2;
    cout << "Area: " << area;
}
