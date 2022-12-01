#include <stdio.h>
#include <math.h>

	int main() {

	float Pi = 3.141593, Altura; 
	int Diametro, Radio, R;
	double Volumen;
	
	printf ("Introduzca el diametro, en metros: "); scanf ("%d", &Diametro);
	printf ("Introduzca la altura, en metros: "); scanf ("%f", &Altura);
	Radio = Diametro/2;
	R = Diametro/2;
	
	/* nota:
	pow es la función potencia en math. Se encuentra definida en math.h
	En este caso, pow(R,2) calcula R al cuadrado.*/
	
	Volumen = (Pi*pow(R, 2))*Altura;
	printf ("\n\nEl radio del cilindro es de %d metros cubicos\n", Radio);
	printf ("El volumen del cilindro es de %1.6f metros cubicos\n", Volumen);
	return 0;
}
