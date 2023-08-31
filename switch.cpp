#include <stdio.h>
int main(){
	
	int opc;
	printf("que caso quieres realizar");
	

	scanf("%d", & opc);
	
	switch(opc){
		case 1:
		printf ("hola");
		break;
		
		case 2:
		printf("¿como estás?");
		break;
		
		case 3:
		printf("1,2,3");
		break;
			
		case 4:
		printf("3,4,5");
		break;
			
		case 5:
		printf("adios");
		break;
	
	     case 6:
		printf("5,6,7");
		break;
			
	}
	return 0;
}



// que acepte negativos, y tener la opcion de cuantos pisos quisieras tener 
