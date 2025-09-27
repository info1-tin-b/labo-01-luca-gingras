/**
 * Euclidian Algorithm
 *
 * The Euclidean algorithm (also called Euclid's algorithm) is an
 * algorithm to determine the greatest common divisor of two integers.
 */
#include <stdlib.h>       // scraica la libreria 
#include <stdio.h>        // scarica gli Imput e Output 

int gcd(int a, int b) {   // definire il numero intero, e dare la funzione 
  int r;                  // una variabile r intero
  while (b != 0) {        // verrà eseguito finchè b non sarà 0
    r = b;                // il valore b all'interno della variabile r
    b = a % b;            // assegna il resto della divisione a\b alla variabile b
    a = r;                // assegna ad a il valore di r
  }                       // fine del ciclo while
  return a;               // restituisce il valore di a
}

int main(int argc, char* argv[]) {    // funzione principale del programma e parametri della riga di comando 
    if (argc <= 2)        // conta le parole inserite 
    {return -1;}          // se la condizione è valida ritorna -1 poi torna alla fnzione main

    int a = atoi(argv[1]); // salva il risultato all'interno di a, argv 1 è il primo argomento, atoi serve per convertire quella stringa in numero intero
    int b = atoi(argv[2]); // salva il risultato all'interno di b, argv 2 è il secondo argomento, atoi serve per convertire la stringa in numero intero

    int result = gcd(a, b);   // richiama la funzione gcd di prima con il valori a e b,il risultato viene salvato nella variabile result

    printf("%d\n", result);   // scrive a schermo %d significa stampare un numero intero, \n vai a capo dopo aver stampato, result è il valore da stampare
  

    return 0;                 // significa che il programma a funzionato
}
