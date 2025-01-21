#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

	int N1, N2, Mn;

printf("\nInsira um valor maior que 0 para delimitar a sequencia:\n");
scanf("%d", &N1);

while(N1<=0){
	printf("\nValor invalido!!\n\nTente novamente:\n");
	scanf("%d", &N1);
}

printf("\nInsira outro valor maior que 0 para delimitar a sequencia:\n");
scanf("%d", &N2);

while(N2<=0){
	printf("\nValor invalido!!\n\nTente novamente:\n");
	scanf("%d", &N2);
}

if(N1<N2){
	for(int i=2;N1<=N2;i++){
		for(int j=N1-1;j>=2;j--){
			Mn = N1%j;
			if(Mn==0) break;
			else {
			printf("%d", N1);
			break;
			}
		}
	}
}else{
	for(int i=2;N1>=N2;i++){
		for(int j=N2-1;j>=2;j--){
			Mn = N2%j;
			if(Mn==0) break;
			else {
			printf("%d", N2);
			break;
			}
			
		}
	}
}

printf("\nPrograma encerrado\n\n");

system("PAUSE");
return 0;
}

