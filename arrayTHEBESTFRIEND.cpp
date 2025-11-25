//dato un array 10 numeri inseriti dall'utente, 
// contare quanti numeri sono maggiori di 0 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num[10], conta = 0;
	for (int i = 0; i < 10; i++) {
		printf("inserisci numero:\n");
		scanf("%d", &num[i]);
		if (num[i] > 0) {
			conta++;
		}
	}
	printf("Ci sono %d numeri maggiori di 0\n", conta);
	return 0;

}