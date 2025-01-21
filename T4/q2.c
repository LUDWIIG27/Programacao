#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	
	int C1, C2, C3;
	
do{
printf("\n\nEscolha a ordem para sua sequencia (1. Crescente ; 2. Decrescente);\nE valores do intervalo:\n");
scanf("%i %i %i", &C1, &C2, &C3);

if(C1!=1 && C1!=2)
	break;

if(C1==1){
	if(C2<C3){
		for(C2;C2<=C3;C2++)
			printf("\n%i", C2);
	}else{
		for(C3;C3<=C2;C3++)
			printf("\n%i", C3);
	}
}else{
	if(C2<C3){
		for(C3;C2<=C3;C3--)
			printf("\n%i",C3);
	}else{
		for(C2;C3<=C2;C2--)
			printf("\n%i",C2);
	}
}
}while(C1==1 || C1==2);

printf("\nValores invalidos!!\n");
printf("\nPrograma Encerrado.\n\n");
system("PAUSE");
return 0;
}