//dato un vettore di char(vuoto), riempirlo con le lettere delll' alfabeto da a a z. 
// ogni char è un  numero! 

#include <iostream>
int main()
{
	char alfabeto[27];
	for (int posizione = 0, carattere= 65; posizione< 26; posizione++, carattere++) {
	
		alfabeto[posizione] = carattere;
	}
	alfabeto[26] = 0;
	printf("%s",alfabeto);
	return 0;
}
