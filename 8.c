#include <stdio.h>
#include <conio.h>

void inverterString(char vet[]) {
	
	 if (vet[0] != '\0'){
	 inverterString(&vet[1]);
	 printf("%c",vet[0]);} 
 
 }

int main() {
	
	 char vet[50], c;
	
	 
	 printf("\nDigite o texto que sera invertido: \n");
	 gets(vet);
	 
	 inverterString(vet);
	 getch(); 
 
 }
