/*Inserisci 5 numeri e stampa:

il primo elemento

l’ultimo elemento

il numero in posizione 2 (indice 1)*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


    int main() {

        int array[5];

        // 1) Inserimento dei 5 numeri
        for (int i = 0; i < 5; i++) {
            printf("Inserisci il numero %d: ", i + 1);
            scanf("%d", &array[i]);
        }

        // 2) Stampa dei valori richiesti

        // Primo elemento (indice 0)
        printf("\nIl primo numero inserito e: %d\n", array[0]);

        // Secondo elemento (posizione 2 → indice 1)
        printf("Il numero in posizione 2 e: %d\n", array[1]);

        // Ultimo elemento (posizione 5 → indice 4)
        printf("L'ultimo numero inserito e: %d\n", array[4]);

        return 0;
    }

   