#include <stdio.h>

int fatorial(int i){
	
	printf("%i\n", i);
	
	if(i > 0){
		return i * fatorial(i - 1);
	} else{
		return 1;
	}
	
}

void main(){
	
	int i;
	
	printf("Insira um numero: \n");
	scanf("%i", &i);
	
	printf("\nSomatorio: %i", fatorial(i));
	
	
}
