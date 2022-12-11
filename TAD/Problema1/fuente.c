#include <stdio.h>
#include <stdlib.h>

char probando();

int main(){
    int blancos = 0, digitos = 0, letras = 0, lineas = 0, otros = 0, total = 0, c;
    
    FILE *fichero;
    fichero = fopen("IntProg_U4.txt", "r");
    
    if( fichero != NULL ){
        printf("El archivo se abrio correctamente.\n");
        
	        do{
	        	// metodo para recorrer el .txt
	        	c = fgetc(fichero);
	        	
	        	//Condiciones 
	        	if( c == ' ' ){
	        		blancos++;
				}else if ( c == '\n' ){
                    lineas++;
                } else if ( c == '.' || c == ',' || c == '+' ){
                    otros++;
                } else if ( c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9'){
                    digitos++;
                } else if ( isalpha(c)){
                    letras++;
                }
			}while(c != EOF);
		}else{
        	printf ("El archivo no existe o no tienes permisos.\n");
        }
        
        fclose(fichero);
        
        total = blancos+digitos+letras+lineas+otros;

    printf("Blancos: %i Digitos: %i Letras: %i Lineas: %i Otros: %i Total: %i", blancos, digitos, letras, lineas, otros, total);
    

    getch();
    return 0;
}
