#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LUNGHEZZA	5

int inserimento() {
	int a=0;
	printf("inserisci un un numero: %d \n");
	scanf("%d", & a);
	return a;
}

int main()
{
	int numeri[LUNGHEZZA];

	int array[LUNGHEZZA] = { 1, 7, 5, 8, 2 };
	char stringa[LUNGHEZZA] = "ciao"; //= {'c', 'i', 'a', 'o', 0};

	int a;
	int posto = 0;
	int numero = inserimento();
	for (; posto< LUNGHEZZA; posto+= 1)
	//for (int indice = 0; indice < LUNGHEZZA; indice += 1)
	{
		
	    numeri[posto]=inserimento(); 

	}

	//ricomincio dal primo posto
	for (posto = 0; posto < LUNGHEZZA; posto++) {
		printf("il numero all'interno e: %d\n", numeri[posto]);
	}

	return 0;
}