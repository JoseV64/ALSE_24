#include <iostream>

int main(){

	int x,y,aux;
	std::cout <<"Ingrese dos números enteros:" << std::endl;
	std::cin >> x >> y;
	aux = x;
	x = y;
	y = aux;
	std::cout << x << ", " << y << std::endl;
	return 0;
}


