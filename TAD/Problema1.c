#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char probando();

int main(){
    int blancos = 0, digitos = 0, letras = 0, lineas = 0, otros = 0, total = 0;
    FILE *fichero;
    
    fichero = fopen("IntProg_U4.txt", "r");
    char buffer[50];

    
    if( fichero != NULL ){
        printf("El archivo se abrio correctamente.\n");
        
        while(feof(fichero) == 0){
            fgets(buffer, 50, fichero);
            printf("%s\n", buffer);
            lineas++;
        }

        while(feof(fichero) == 0){
            fgets(buffer, 50, fichero);
            if( buffer[] = "\0" ){
                blancos++;
            }
        }

        for(int c = getc(fichero); c != EOF; c = getc(fichero)){
            if(c == '\0'){
                
            }
        }
        
        

        fclose(fichero);

        }else{
        printf ("El archivo no existe o no tienes permisos.\n");
    }

    printf("Total: %i Lineas: %i Blancos: %i", total, lineas, blancos);

    getch();
    return 0;
}