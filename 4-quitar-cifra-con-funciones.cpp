/*********************************************************************************************\
 * Autores: Javier Martínez y Miguel Ángel Latre
 * Última revisión: 4-10-2023
 * Resumen: Programa que solicita al usuario un número natural y escribe en la pantalla los
 *          números resultantes de suprimir todas las ocurrencias de cada una de las cifras del
 *          0 al 9 en el número escrito por el usuario.
 *          Problemas del tema 5 (enteros). Programación 1
\*********************************************************************************************/
#include <iostream>
using namespace std;

/*
 * Pre:  0 ≤ cifra ≤ 9
 * Post: Devuelve un entero que, escrito en base 10, equivale
 *       al resultado de suprimir todas las ocurrencias de la
 *       cifra «cifra» en el entero «numero» cuando se escribe en base 10.
 *       Ejemplos:
 *           quitarCifra(902037122, 0) = 9237122
 *           quitarCifra(902037122, 1) = 90203722
 *           quitarCifra(902037122, 2) = 900371
 *           quitarCifra(902037122, 4) = 902037122
 *           quitarCifra(902037122, 9) = 2037122
 */
unsigned quitarCifra(unsigned numero, unsigned cifra) {
    unsigned resultado = 0;
    unsigned potencia10 = 1;
    while (numero != 0) {
        if (numero % 10 != cifra) {
            resultado = resultado + (numero % 10) * potencia10;
            potencia10 = 10 * potencia10;
        }
        numero = numero / 10;
    }
    return resultado;
}


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
        cout << "El número " << numero << " sin el " << cifra << " es " 
             << quitarCifra(numero, cifra) << endl;
    }
}
