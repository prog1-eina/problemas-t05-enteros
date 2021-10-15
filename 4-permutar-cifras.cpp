/*******************************************************************************
 * Autores: Javier Martínez y Miguel Ángel Latre
 * Última revisión: 15-10-2021
 * Resumen: Función que permuta las cifras de un número y programa de
 *          prueba de la misma.
 *          Problemas del tema 6 (enteros). Programación 1
 ******************************************************************************/
#include <iostream>
using namespace std;

/*
 * Pre:  ---
 * Post: Ha devuelto un entero que, escrito en base 10, equivale al resultado
 *       de permutar cada cifra significativa de «n» que ocupa una posición
 *       impar cuando se escribe en base 10 con la cifra de posición par
 *       situada a su izquierda (se permutan unidades con decenas, centenas
 *       con millares y, así sucesivamente).
 *       Ejemplos:
 *           permutarCifras(12345678) = 21436587
 *           permutarCifras(123456789) = 132547698
 *           permutarCifras(10407) = 14070
 *           permutarCifras(104073) = 10437
 */
unsigned int permutarCifras(unsigned int n) {
    unsigned int resultado = 0;
    unsigned int pot100 = 1;
    while (n >= 10) {
        unsigned int cifraPosImpar = n % 10;
        unsigned int cifraPar = (n % 100) / 10;
        resultado += 10 * pot100 * cifraPosImpar + pot100 * cifraPar;
        pot100 = 100 * pot100;
        n = n / 100;
    }
    return resultado + pot100 * n;
}

/*
 * Pre:  ---
 * Post: A modo de prueba de la función «quitarCifra», ha escrito en la pantalla
 *       los valores devueltos por algunas invocaciones a la misma.
 */
int main() {
    cout << permutarCifras(12345678) << " = 21436587" << endl;
    cout << permutarCifras(123456789) << " = 132547698" << endl;
    cout << permutarCifras(10407) << " = 14070" << endl;
    cout << permutarCifras(104073) << " = 10437" << endl;
    cout << permutarCifras(10) << " = 1" << endl;
    cout << permutarCifras(35) << " = 53" << endl;
    cout << permutarCifras(8) << " = 8" << endl;
    cout << permutarCifras(0) << " = 0" << endl;
    return 0;
}
