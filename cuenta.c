#include <stdio.h>
char P[5][20]={"[1]1Kg de huevo", "[2]Garrafon", "[3]Papas", "[4]Coca cola", "[5]1kg de Tortilla"};
int cont,hue,gar,pap,coc,tor,venta=0;
float acum;
void cuenta(){
	if(hue>=1){
		printf("\n\nUsted tiene(s) %d kilos de huevo y son %c%d",hue,36,hue*35);
	}
		if(gar>=1){
		printf("\n\nUsted tiene(s) %d garafone(s) y son %c%d",gar,36,gar*19);
	}
		if(pap>=1){
		printf("\n\nUsted tiene(s) %d bolsa(s) de papas y son %c%d",pap,36,pap*15);
	}
		if(coc>=1){
		printf("\n\nUsted tiene(s) %d botella(s) de coca cola y son %c%d",coc,36,coc*15);
	}
		if(tor>=1){
		printf("\n\nUsted tiene(s) %d kilos de tortilla y son %c%d",tor,36,tor*10);
	}
	if(acum>=1){
		printf("\n\n\tSu cuenta seria %c%f",36,acum);
	}else{
		printf("\n\n\tUsted no selecciono nada :(");
	}
}
