#include<stdio.h>
#include<math.h>

int imprimenumeros(int n, int i){
	
    printf("%d\n", n);
    if(n > 0){
        return imprimenumeros(n-1,  i);
    } else{
        return 0;
    }
    
}

int main(){
  
  int n, i = 0;
  
  printf("Digite um numero inteiro N: \n");
  scanf("%d", &n);
  
  
  imprimenumeros(n,i);
   
  return 0;
}
