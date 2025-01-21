#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    int n, aux, i;
    
    do{
        system("cls");
        aux=1;
        printf("\nInsira um valor:\n");
        scanf("%d", &n);
        
        if(n<=0){
            printf("\nValor invalido\n");
            system("PAUSE");
        }
        for(i=2;i<=n/2;i++){
            if(n%i==0)
                aux+=i;//aux = aux + i
        }
        if(aux==n){
            printf("\nEste valor eh um numero perfeito!!\n\n");
            system("pause");
        }
        else{
            printf("\nEste valor nao eh um numero perfeito\n\n");
            system("pause");
            }
    }while(1);
    
    
    return 0;
}