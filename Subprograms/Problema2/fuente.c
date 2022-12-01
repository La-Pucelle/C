#include <stdio.h>
int a;
double suma = 0;
void entraDatos();
void calculo();

int main() {
 	entraDatos();
 	calculo();
 	printf("La suma armonica es: %lf\n\n ", suma);
 	
 	return 0;
}

void entraDatos() {
	int error = 0;
 	do {
 		
 		printf("Por favor introduzca un numero entre 1 y 100: ");
 		
		scanf("%i", &a);
		
 		if( a <= 0 || a >= 101){
 			printf("Ingrese un numero correcto.\n");
 		}else{
 			error++;
		}
		
 	}while(!error);
}


void calculo() {
	int i;
	
	for(i = 1; i <=a ; i++){
		suma = suma + (1.0/i);
	}
}
