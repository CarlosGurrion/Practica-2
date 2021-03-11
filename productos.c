#include <stdio.h>
void productos(){
	char P[6][20]={"[1]1Kg de huevo", "[2]Garrafon", "[3]Papas", "[4]Coca cola", "[5]1kg de Tortilla"};
	int cont;
	for(cont=0;cont<6;cont++){
		printf("%s \n",(P+cont));
	}

}
