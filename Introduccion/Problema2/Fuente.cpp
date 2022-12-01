#include <stdio.h>
#include <iostream>
using namespace std;

	int main(){
		
	char Beca, Arriendo, Hijos;
	int bono;
	
	cout<<"Tiene Hijos ?: ";
	cin>>Hijos;
	cout<<"Arrienda ?: ";
	cin>>Arriendo;
	cout<<"Tiene Beca ?: ";
	cin>>Beca;
	
	if(Arriendo=='S' && Hijos=='S'){
        bono = 130000;
    	}else if(Arriendo=='S'){
        		bono = 80000;
    			}else if(Hijos=='S'){
        				bono = 50000;
    					}
    if(Beca=='S'){
    	bono = 0;
    }
    
	printf("Su Bono es de: %d", bono);             
    return 0;
}
