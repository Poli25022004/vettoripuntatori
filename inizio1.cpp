#define VALORE1	20
#define VALORE2	2

//dichiarazione funzione
//cosa mi da in output?
//quanti e di che tipo di input servono?
//che nome gli posso dare in modo che si capisca cosa faccia?
int div(int n1, int n2)
{
	return n1 / n2;
}

int main()
{
	//senza motivo, non salvo da nessuna parte il risultato
	div(VALORE1, VALORE2);

	//prima strada
	int ris;
	ris = div(VALORE1, VALORE2);

	//seconda strada
	int a = VALORE1;
	int b = VALORE2;
	ris = div(a, b);

	//terza strada
	return div(VALORE1, VALORE2);

	//return ris;
}