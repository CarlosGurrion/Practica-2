#include <stdio.h>
void devoluciones(){
	int del,as,rem;
	printf("Que desea devolver%c\n",63);
	for(cont=0;cont<6;cont++){
		printf("%s \n", &P[cont] );
	}
	scanf("%d",&del);
	 switch(del){
	 	case 1:
	 		printf("Cuantos desea devolver%c\n",63);
	 		scanf("%d",&as);
	 	if(as<=hue){
	 		hue=hue-as;
	 		rem=35*as;
	 		acum=acum-rem;
	 		printf("producto devuelto\n");
		 }else{
		 	printf("No se puede hacer esta accion :( \n");}
		 break;
		 case 2:
	 	printf("Cuantos desea devolver%c\n",63);
	 		scanf("%d",&as);
	 	if(as<=gar){
	 		gar=gar-as;
	 		rem=19*as;
	 		acum=acum-rem;
	 		printf("producto devuelto\n");
		 }else{
		 	printf("No se puede hacer esta accion :( \n");
		 }
		 break;
		 case 3:
		 	printf("Cuantos desea devolver%c\n",63);
	 		scanf("%d",&as);
	 	if(as<=pap){
	 		pap=pap-as;
	 		rem=15*as;
	 		acum=acum-rem;
	 		printf("producto devuelto\n");
		 }else{
		 	printf("No se puede hacer esta accion :( \n");
		 }
		 break;
		 case 4:
		 	printf("Cuantos desea devolver%c\n",63);
	 		scanf("%d",&as);
	 	if(as<=coc){
	 		coc=coc-as;
	 		rem=15*as;
	 		acum=acum-rem;
	 		printf("producto devuelto\n");
		 }else{
		 	printf("No se puede hacer esta accion :( \n");
		 }
		 break;
		 case 5:
		 	printf("Cuantos desea devolver%c\n",63);
	 		scanf("%d",&as);
	 	if(as<=tor){
	 		tor=tor-as;
	 		rem=35*as;
	 		acum=acum-rem;
	 		printf("producto devuelto\n");
		 }else{
		 	printf("No se puede hacer esta accion :( \n");
		 }
		break;
	 }
}
