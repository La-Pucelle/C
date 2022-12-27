#include <stdio.h>

struct datos{
    char nombre[40];
    char coalision[25];
};

struct candidato{
    int posicion;
    int votos;
    struct datos pers;
};

int main(){

    int i, posmay = 0, maynmend = 0, cand = 0, peru;
    int error = 0;
    struct candidato municipalidad[cand];
    
    printf("Ingrese numero de candidatos: ");
    
    do{
    	scanf("%i", &cand);
    	//if para 
    	if( cand <= 1 ){
    		printf("Ingrese un numero mayor a 1");
		} else {
			error = 1;
		}
		
    }while(!error);

	//For para datos ingresados por consola
    for(i = 0; i < cand; i++){
        printf("Ingrese el nombre del candidato numero %i\n", i+1);
        scanf("%s", &municipalidad[i].pers.nombre);
        printf("Ingrese la coalision del candidato numero %i\n", i+1);
        scanf("%s", &municipalidad[i].pers.coalision);
        printf("Ingrese posicion del candidato numero %i\n", i+1);
        scanf("%d", &municipalidad[i].posicion);
        printf("Ingrese cantidad de votos del candidato numero %i\n", i+1);
        scanf("%d", &municipalidad[i].votos);
    }
    
    
	//Metodo para elegir la posicion de la array con el valor de votos mas alto
    for( i = 0; i < cand; i++){
         if (maynmend < municipalidad[i].votos){
            maynmend = municipalidad[i].votos;
            posmay = i;
        }
    }

   
    
    printf("\n\t****DATOS DEL CANDIDATO CON MAYOR NUMERO DE VOTOS****\n");
    printf("NOMBRE: %s\n", municipalidad[posmay].pers.nombre);
    printf("COALICION: %s\n", municipalidad[posmay].pers.coalision);
    printf("POSICION: %d\n", municipalidad[posmay].posicion);
    printf("NUMERO DE VOTOS: %d\n", municipalidad[posmay].votos);
    
    getch();
    return 0;
}