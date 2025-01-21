/* 
	A variável P não é inicializada quando deveria.
	Além disso, ver o comentário no código.
	Questão parcialmente correta.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

	int N1, N2, P; //P = Flag que marca um Número não primo;

printf("\nInsira um valor maior que 0 para delimitar a sequencia:\n");
scanf("%d", &N1);

while(N1<=0){
	printf("\nValor invalido!!\n\nTente novamente:\n");
	scanf("%d", &N1);
}

printf("\nInsira outro valor maior que 0 para delimitar a sequencia:\n");
scanf("%d", &N2);

/* O enunciado não exige que N1 e N2 sejam diferentes... Portanto, esta
   condição não deveria estar presente no laço while a seguir. */
while(N2<=0 || N2==N1){
	printf("\nValor invalido!!\n\nTente novamente:\n");
	scanf("%d", &N2);
}
if(N1<N2){
	for(int j=N1+1;j<N2;j++){//j será N1+1 pois a questão pede os números primos ENTRE a sequência N1, N2
		for(int i=2;j>i;i++)	
			if(j%i==0) P++;//Busca um número não primo a partir da sobra de J/I, caso tenha, marca a flag "P"
		if(P==0) printf("\n\n%d", j);//O programa irá imprimir um número cujo deve ser primo, a partir da flag "P"
		else P=0;
	}
}else{
	for(int j=N2+1;N1>j;j++){//j será N2+1 pois a questão pede os números primos ENTRE a sequência N1, N2
		for(int i=2;j>i;i++)	
			if(j%i==0) P++;//Busca um número não primo a partir da sobra de J/I, caso tenha, marca a flag "P"
		if(P==0) printf("\n\n%d", j);//O programa irá imprimir um número cujo deve ser primo, a partir da flag "P"
		else P=0;
	}
}

printf("\n\nPrograma encerrado.\n\n\n");
system("PAUSE");
return 0;
}