#include <stdio.h>
#include <math.h>

int main(){

    int precio, pago, vuelto;
    float cambiarvariable, vueltoR;
    printf("Ingrese Precio: \n");
    scanf("%d", &precio);
    printf("Ingrese Monto Pago: \n");
    scanf("%d", &pago);
    vuelto = pago-precio;
	cambiarvariable = (float)vuelto/10;
	vueltoR = round(cambiarvariable)*10;
    printf("\n\nVuelto Sin redondeo = %d", vuelto);
    printf("\n\nVuelto Con redondeo = %1.2f", vueltoR);
}
