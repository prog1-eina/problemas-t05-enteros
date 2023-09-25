/*********************************************************************************************\
 * Autores: Javier Martínez y Miguel Ángel Latre
 * Última revisión: 25-9-2023
 * Resumen: Programa que solicita al usuario un número natural y escribe en la pantalla los
 *          números resultantes de suprimir todas las ocurrencias de cada una de las cifras del
 *          0 al 9 en el número escrito por el usuario.
 *          Problemas del tema 5 (enteros). Programación 1
\*********************************************************************************************/
#include <iostream>
using namespace std;

/*
 * Programa que solicita al usuario un número natural y escribe en la pantalla los números
 * resultantes de suprimir todas las ocurrencias de cada una de las cifras del 0 al 9 en el
 * número escrito por el usuario.
 */
int main() {
    // Petición del dato y filtrado de la entrada de usuario:
    int numero;
    do {
        cout << "Escriba un número natural: ";
        cin >> numero;
    } while (numero <= 0);

    // Para cada cifra entre 0 y 9
    for (unsigned cifra = 0; cifra <= 9; cifra++) {
        // La eliminamos de una copia de «numero»
        unsigned n = numero;
        unsigned resultado = 0;
        unsigned potencia10 = 1;
        while (n != 0) {
            // Si la última cifra hay que mantenerla
            if (n % 10 != cifra) {
                // La "copiamos" al principio del resultado
                resultado = resultado + (n % 10) * potencia10;
                // Recalculamos potencia10 para que tenga un 0 más.
                potencia10 = 10 * potencia10;
            }
            n = n / 10;
        }
        cout << "El número " << numero << " sin el " << cifra << " es " << resultado << endl;
    }
}
