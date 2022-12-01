#include <stdio.h>

int diferencia;

/*Prototipo de subprograma*/
float segs1();
float segs2();

/*Programa Main*/
	int main() {
		int H, M, S;
		int error = 0;
		long S1, S2;

		printf("Escribe la primera hora (formato hh:mm:ss): \n");
		S1 = segs1();
		printf("Escribe la segunda hora (posterior): ");
		do {
			S2 = segs2();
			
			if(S2 < S1){
				printf("Ingrese una hora posterior!\n");
			}else{
				error++;
			}
		}while(!error);
		
		
		if(S2 > S1){
            diferencia=S2-S1;
        }else{
            diferencia=S1-S2;
        }
        
		H=diferencia/3600;
		M=diferencia/60;
		S=diferencia - (M*60);
				
		if(S >= 60){
            S = 0;
            M++;
        }
        
        if(M >= 60){
                
            }

        if(H>=24){
            H = 0;
        }
        
		
		printf("La diferencia es %i hora(s), %i minuto(s), %i segundo(s).\n", H, M, S);
		
		return 0;
	}
	
	/*Subprograma sin atributos y con retorno*/
	float segs1(){
	int H, M, S, error = 0, total;
	
	do {
		
		scanf("%i:%i:%i", &H, &M, &S);
		
		if (H > 23 || H < 0 || M > 59 || M < 0 || S > 59 || S < 0){
			printf("Hora incorrecta!!!!\n");
			printf("Escribe la hora correcta: ");
		}else{
			error++;
		}
	}while(!error);
	
	
	
	total=H*3600 + (M*60+S);
	return total;
	}
	
	/*Subprograma sin atributos y con retorno*/
	float segs2(){
	int H, M, S, error = 0, total;
	
	do {
		
		scanf("%i:%i:%i", &H, &M, &S);
		
		if (H > 23 || H < 0 || M > 59 || M < 0 || S > 59 || S < 0){
			printf("Hora incorrecta!!!!\n");
			printf("Escribe la hora correcta: ");
		}else{
			error++;
		}
	}while(!error);
	
	total=H*3600 + (M*60+S);
	return total;
	}

