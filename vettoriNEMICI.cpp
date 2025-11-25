#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
/*Inserire 5 numeri nel vettore e poi stamparli

Chiedi all’utente 5 numeri e salvali in un array.
Poi stampali nell’ordine in cui sono stati inseriti.*/

int main() {

    int v[5];   // 1) dichiarazione del vettore

    // 2) ciclo per inserire i numeri
    for (int i = 0; i < 5; i++) {
        printf("Inserisci il numero %d: ", i + 1);
        scanf("%d", &v[i]);
      
    }

    // 3) stampa dei numeri inseriti
    printf("\nHai inserito:\n");
    for (int i = 0; i < 5; i++) {
        printf("ecco i valori: %d \n", v[i]);
    }

    return 0;
}
