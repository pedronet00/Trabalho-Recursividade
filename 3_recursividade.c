#include <stdio.h>

int fibonacci(int n){
	
	if(n == 0 || n == 1){
		return n;
	} else{
		return fibonacci(n-2) + fibonacci(n-1);
	}
}

void main(){
	
	int n;
	
	printf("Insira um numero: ");
	scanf("%i", &n);

	printf("Resultado: %i", fibonacci(n));
}
