#include <stdio.h>
#include <stdlib.h>

int soma(int x, int y){
	//Alteração feita na branch fSoma
	return x+y;
}
int subtrai(int x, int y){
	//Alteração feita na branch fSub
	return x-y;
}
int multiplica(int x, int y){
<<<<<<< HEAD
	//Alteração feita na branch fMultiplica
	return x*y;
}
int divide(int x, int y){
	//Alteração feita na branch fDivide
=======
	//Alteração feita na branch fMultipicação
	return x*y;
}
int divide(int x, int y){
	//Alteração feita na branch fDiv
>>>>>>> fDiv
	return x/y;
}

int main(){

	printf("\n\n\nHello git!\n\n\n");
	printf("Soma: %d\n", soma(2,2));
	printf("Subtração: %d\n", subtrai(2,2));
	printf("Multiplicação: %d\n", multiplica(2,2));
	printf("Divisão: %d\n", divide(2,2));
	

}
