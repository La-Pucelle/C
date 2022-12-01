#include <stdio.h> //directiva include

//funcion main inicia la ejecucion del programa
int main(){	
	
	//Se Definen nuevas variables y se ordenan las anteriores
	int arreglo[20], num = 0, mayor = 0, j, i;
	//metodo para aleatorizar segun la hora 
	srand (time(NULL));
	printf("los numeros aleatorios son:\n");
	
	//Se elimino un for sobrante, se edito el metodo rand, se a�adio el metodo para imprimir el arreglo con mayor valor, a un solo for.
	for(i = 0; i < 20; i++){
		arreglo[i] = (rand()% 40)+10;//metodo para a�adirle un valor de manera aleatoria a arreglo en
		printf("Arreglo[%i] = %i\n", i, arreglo[i]);//print de los arreglos y sus valores correspondientes
		if(mayor < arreglo[i]) 
		mayor = arreglo[i];
		}
	printf("\nel mayor elemento del arreglo es: %i" , mayor);//Print del arreglo de mayor valor
	getch();
	return 0; //indica que el programa se termino con exito
} //fin del programa
