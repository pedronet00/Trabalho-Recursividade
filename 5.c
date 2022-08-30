#include <stdio.h>
#include <stdlib.h>


void trocar(int v[], int ini, int fim){
    int aux;
    if(ini < fim){
        aux = v[ini];
        v[ini] = v[fim];
        v[fim] = aux;
        trocar(v, ini + 1, fim - 1);
    }
}

void imprimir(int v[], int tam){
    if(tam == 1)
        printf("[%d], ", v[tam - 1]);
    else{
        imprimir(v, tam - 1);
        printf("[%d], ", v[tam - 1]);
    }
}

int main () {

    int vet[3], i;
    
    for(i = 0; i < 3; i++){
    	printf("Insira o valor [%i] do vetor: \n", i);
    	scanf("%i", &vet[i]);
	}

    imprimir(vet, 3);
    trocar(vet, 0, 2); 
    printf("\n");
    imprimir(vet, 3);

    return 0;
}
