#include <stdio.h>

int main(){
	int dado = 10;
	printf("Antes do incremento de dados: %d.\n", dado);
	
	dado++;
	printf("Depois do incremento de dados: %d.\n", dado);
	
	dado--;
	printf("Depois do decremento de dados: %d.\n", dado);
	
	dado+= 3;
	printf("Depois do incremento em 3 unidades: %d.\n", dado);
	
	dado-= 2;
	printf("Depois do decremento em 3 unidades: %d.\n", dado);
	
	dado*= 10;
	printf("Depois de multiplicar por 10: %d.\n", dado);
	
	
	}
