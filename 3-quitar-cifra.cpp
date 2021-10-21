/*******************************************************************************
 * Autores: Javier Martínez y Miguel Ángel Latre
 * Última revisión: 15-10-2021
 * Resumen: Función que quita una determinada cifra de un número y programa de
 *          prueba de la misma.
 *          Problemas del tema 6 (enteros). Programación 1
 ******************************************************************************/
#include <iostream>
using namespace std;

/*
 * Pre:  0 ≤ c ≤ 9
 * Post: Ha devuelto un entero que, escrito en base 10, equivale
 *       al resultado de suprimir todas las ocurrencias de la
 *       cifra «c» en el entero «n» cuando se escribe en base 10.
 *       Ejemplos:
 *           quitarCifra(902037122, 0) = 9237122
 *           quitarCifra(902037122, 1) = 90203722
 *           quitarCifra(902037122, 2) = 900371
 *           quitarCifra(902037122, 4) = 902037122
 *           quitarCifra(902037122, 9) = 2037122
 */
unsigned quitarCifra(unsigned n, unsigned c) {
    unsigned resultado = 0;
    unsigned potencia10 = 1;
    while (n != 0) {
        if (n % 10 != c) {
            resultado = resultado + (n % 10) * potencia10;
            potencia10 = 10 * potencia10;
        }
        n = n / 10;
    }
    return resultado;
}

/*
 * Pre:  ---
 * Post: A modo de prueba de la función «quitarCifra», ha escrito en la pantalla
 *       los valores devueltos por algunas invocaciones a la misma.
 */
int main() {
    cout << quitarCifra(902037122, 0) << " = 9237122" << endl;
    cout << quitarCifra(902037122, 1) << " = 90203722" << endl;
    cout << quitarCifra(902037122, 2) << " = 900371" << endl;
    cout << quitarCifra(902037122, 4) << " = 902037122" << endl;
    cout << quitarCifra(902037122, 9) << " = 2037122" << endl;
    cout << quitarCifra(9, 9) << " = 0" << endl;
    cout << quitarCifra(9, 2) << " = 9" << endl;
    cout << quitarCifra(0, 2) << " = 0" << endl;
    return 0;
}
