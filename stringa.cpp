#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define LUNGHEZZA	4 + 1 

int main()
{
	char stringa[LUNGHEZZA];

	//quando uso char, devo usare le lettere negli apici
	stringa[0] = 'c';
	stringa[1] = 'i';
	stringa[2] = 'a';
	stringa[3] = 0;
	stringa[4] = 'o';
	
	printf("la scritta e: %s", stringa);

	return 0;
}