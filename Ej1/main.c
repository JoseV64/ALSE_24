#include <stdio.h>

int main(){

	int x,y,aux;
	printf("Ingrese dos números enteros: ");
	scanf("%i",&x);
	scanf("%i",&y);
	aux = x;
	x = y;
	y = aux;
	printf("%i, %i\n", x, y);
	return 0;
}


