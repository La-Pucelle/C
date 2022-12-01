#include <stdio.h>
#include <string.h>

	int main(){
		
	int salida; //variable usada para salir de while
	int i = 0; //variable para utilizar de indice
	char nombres[4][50]; //Array que almacena los nombres ingresados por consolab
	float notas[4], verificacion = 0; // Array que almacena notas ingresadas por consola. Variable utilizada para hacer verificacion de los datos ingresados
	
		while(i != 4){ //While usado para ingresar los datos en las arrays
			salida = 0; //Se inicializa salida en 0 para que no se acumule con el ciclo
			printf("Nombre %i: ", i+1);
			scanf("%s", &nombres[i]); //Datos ingresados por consola para almacenar en la array con la posicion i
			
			while(salida < 10){ // While
				
				printf("Nota %i: ", i+1);
				scanf("%f", &verificacion); //Datos ingresados en la variable de verificacion
							
				if(verificacion > 10 || verificacion <= 0){ // condicion de Verificacion
					printf("Ingrese una nota del 1 al 10.\n");
				}
				
				
				if(verificacion < 11 && verificacion > 0){
					salida = 10;
					notas[i] = verificacion; // Se iguala notas con verificacion, para almacenar datos ingresados por consola en la array
				}
			}
			i++;
		}
	
	char resultado[4][20];
	
	for(i=0 ; i<4 ; i++){
			if(notas[i] <= 4.99){ // se cambio switch por sistema if else
			strncpy(resultado[i],"Suspenso", 8);
			resultado[i][8]='\0'; // se aumento la cantidad de characters que contiene una array
			}else if(notas[i] <= 6.99){
			strncpy(resultado[i],"Bien", 4);
			resultado[i][4]='\b'; // se aumento la cantidad de characters que contiene una array
			}else if (notas[i] <= 8.99){
			strncpy(resultado[i],"Notable", 8);
			resultado[i][8]='\r';// se aumento la cantidad de characters que contiene una array
			}else if(notas[i] <= 10){
			strncpy(resultado[i],"Sobresaliente", 14);
			resultado[i][14]='\n';// se aumento la cantidad de characters que contiene una array
			}
	}
	
	for( i=0; i<4; i++){
	printf("El alumno %s tiene una nota de %.1f, por lo que su resultado es %s.\n",nombres[i],notas[i],resultado[i]); //Se cambiaron valores double a float
	}
} 
