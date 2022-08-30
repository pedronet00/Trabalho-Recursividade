#include <stdio.h>


int somatorio(int i){
	
	printf("%i\n", i);
	
	if(i > 0){
		return i + somatorio(i-1);
	} else{
		return 0;
	}
	
}

void main(){
	
	int i;
	
	printf("Insira um numero: \n");
	scanf("%i", &i);
	
	printf("Somatorio: %i", somatorio(i));
	
	
}
