/*******************************************************************************
 * Autores: Javier Martínez y Miguel Ángel Latre
 * Última revisión: 15-10-2021
 * Resumen: Función que calcula el orden de un número repituno y programa de
 *          prueba de la misma.
 *          Problemas del tema 5 (enteros). Programación 1
 ******************************************************************************/
#include <iostream>
using namespace std;

/*
 * Pre:  ---
 * Post: Si «n» es un número repituno, ha devuelto el orden del mismo.
 *       En caso contrario, ha devuelto -1.
 */
int ordenRepituno(unsigned n) {
    bool esRepituno = true;
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
 * Programa que, a modo de prueba de la función «repituno», ha escrito en la 
 * pantalla los valores devueltos por algunas invocaciones a la misma
 */
int main() {
    cout << ordenRepituno(0) << " = 0" << endl;
    cout << ordenRepituno(1) << " = 1" << endl;
    cout << ordenRepituno(11) << " = 2" << endl;
    cout << ordenRepituno(111111) << " = 6" << endl;
    cout << ordenRepituno(110111) << " = -1" << endl;
    cout << ordenRepituno(211111) << " = -1" << endl;
    cout << ordenRepituno(111113) << " = -1" << endl;
}
