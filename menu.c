#include <stdio.h>
void menu(){
	int L,m,v;
	char men[4][30]={"[1]Mostrar productos","[2]Agregar el carrito","[3]Eleminar algo del carrito","[4]Mostrar carrito"};
	printf("///////////	BIENVENIDO A LA TIENDA	\\\\\\\\\\\\\n");
	do{
	printf("\nQue desea hacer%c\n",63);
	for(L=0;L<4;L++){
		printf("%s\n",(men+L));
	}
	scanf("%d",&m);
	getchar();
	switch(m){
	default:
	printf("respuesta no valida");
	break;
	case 1:
	productos();
	break;
	case 2:
	ventas();
	break;
	case 3:
	devoluciones();
	break;
	case 4:
	cuenta();
	printf("\n\ndesea terminar su compra%c\n",63);
	printf("\nsi ese es el caso presiona 1\n");
	scanf("%d",&v);
	
}
}while(v!=1);
printf("\n\ngracias por su compra :)");
}
