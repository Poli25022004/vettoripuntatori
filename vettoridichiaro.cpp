#define CRT_SECURE_NO_WARNING
#include <iostream>
#include <stdio.h>
//dichiarare e stampare tutti gli elementi di un vettore
int main()
{
	int array[5] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; i++) {
		printf("i valori sono : %d\n",array[i]);
	}
	return 0;
}
