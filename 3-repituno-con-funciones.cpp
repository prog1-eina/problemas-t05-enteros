/******************************************************************************
 * Autores: Javier Martínez y Miguel Ángel Latre
 * Última revisión: 15-10-2021
 * Resumen: Función que calcula el orden de un número repituno y programa de
 *          prueba de la misma.
 *          Problemas del tema 5 (enteros). Programación 1
 *****************************************************************************/
#include <iostream>
using namespace std;

/*
 * Pre:  ---
 * Post: Si «n» es un número repituno, devuelve el orden del mismo.
 *       En caso contrario, devuelve -1.
 */
int ordenRepituno(unsigned n) {
    bool esRepituno = n > 0;
    unsigned orden = 0;
    while (n != 0 && esRepituno) {
        esRepituno = (n % 10 == 1);
        orden++;
        n = n / 10;
    }

    if (esRepituno) {
        return orden;
    } else {
        return -1;
    }
}


/*
 * Programa que solicita al usuario un número entero y, si es un número
 * repituno, escribe en la pantalla su orden. En caso contrario, indica que
 * el número introducido no es repituno.
 */
int main() {
    // Petición y lectura del número
    cout << "Escriba un número entero: ";
    int numero;
    cin >> numero;

    // Cálculo de si es repituno y su orden
    int orden = ordenRepituno(numero);

    // Discriminación y escritura del resultado
    if (numero >= 0 && orden >= 0) {
        cout << numero << " es repituno y su orden es " << orden << "."
             << endl;
    } else {
        cout << numero << " no es repituno." << endl;
    }
    return 0;
}
