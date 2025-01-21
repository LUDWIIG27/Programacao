#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    
    int n, aux;
    
do{
    aux=1;
    printf("\nInsira um numero inteiro:\n");
    scanf("%d", &n);
    
    if(n<=0) break;
    
    for(int i=2;i<=n/2;i++){
        if(n%i==0) aux+=i;
    }
    if(aux==n && n!=1)
        printf("\nEste eh um numero perfeito!!\n");
    else
        printf("\nEste nao eh um numero perfeito\n");
}while(1);

printf("\nValor invalido!!\n");
printf("\nPrograma Encerrado.\n\n");
system("PAUSE");
return 0;
}