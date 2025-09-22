/******************************************************************************
 * Autores: Miguel Ángel Latre
 * Última revisión: 25-9-2023
 * Resumen: Programa que solicita al usuario un número entero y, si es un
 *          número repituno, escribe en la pantalla el su orden. En caso
 *          contrario, indica que el número introducido no es repituno.
 *          Problemas del tema 5 (enteros). Programación 1
 *****************************************************************************/
#include <iostream>
using namespace std;

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
    int n = numero;
    bool esRepituno = (n > 0);
    unsigned orden = 0;
    // Esquema de la solución planteada: Búsqueda de un dígito en n que sea
    // distinto de 1
    // Si se encuentra uno distinto de 1 → no es repituno
    // Si no se encuentra ninguno distinto de 1 → es repituno
    while (n != 0 && esRepituno) {
        esRepituno = (n % 10 == 1);
        n = n / 10;
        // Llevamos la cuenta del número de cifras de n,
        // para calcular también el orden del repituno, si finalmente lo es.
        orden++;
    }

    // Discriminación y escritura del resultado
    if (esRepituno) {
        cout << numero << " es repituno y su orden es " << orden << "."
             << endl;
    } else {
        cout << numero << " no es repituno." << endl;
    }
}
