//bisogna definirla per non avere errori sul compilatore
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //libreria per stampare in console e leggere da tastiera
float richiesta() {
	float num;
	printf(" Dammi un numero: ");
	scanf("%f",& num);
	return num;
}
int main()
{
	float a,b, ris;
	a = richiesta();
	b = richiesta();
	ris = a / b;
	printf("il risultato della divisione e %f", ris);
	return 0;
}