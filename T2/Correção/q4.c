/*
	Questão correta.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
	float ppc, crnt, lmtp, lmtc;
	int aux;
	
	printf("Bem Vindo ao Programa de Avaliacao de Conta Especial!\n\n");
	printf("Para avaliarmos se sua conta eh especial comece inserindo o saldo de sua conta poupanca: R$");
	scanf("%f", &ppc);
	printf("Agora insira o saldo de sua conta corrente: R$");
	scanf("%f", &crnt);
	
	if ((ppc <=1000 && crnt <=1000)) {
		printf("\nInfelizmente voce nao possui uma conta especial.\n\n");
		system("PAUSE");
		return 0;
	}
	
	if (ppc > crnt)
	{
		aux = 1,
		lmtp = ppc*2,
		lmtc = crnt*3;
	}
	else 
	{
		aux = 2,
		lmtp = ppc*3,
		lmtc = crnt*2;
	}
		
	switch(aux)
	{
		case 1 :	if(lmtp > lmtc)
						printf("\nO limite da sua conta escpeial eh: R$%2.f!\n\n", lmtp);
					else
						printf("\nO limite da sua conta escpeial eh: R$%2.f!\n\n", lmtc);	
					break;	
					
		case 2 :	if(lmtp > lmtc)
						printf("\nO limite da sua conta escpeial eh: R$%2.f!\n\n", lmtp);
					else
						printf("\nO limite da sua conta escpeial eh: R$%2.f!\n\n", lmtc);	
	}

	system("PAUSE");
}