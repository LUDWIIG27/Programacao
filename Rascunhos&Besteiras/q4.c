/*
	Para maior coerência, seria melhor verificar se as variáveis são
	iguais a zero antes de realizar os respectivos cálculos.
	Questão parcialmente correta.
	Nota da questão: 1,2 pontos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
	float R, V, I;//R: Resistencia, V: Tensao, I: Corrente.
	int op; //op: Operacao.
	
	printf("Escolha qual grandeza voce deseja calcular :\n1. Tensao\n2. Corrente\n3. Resistencia\n");
	printf("Sua escolha foi: ");
	scanf("%d", &op);
	
	if (op<1 || op>3)
	{
		printf("\nA grandeza escolhida eh invalida.\n\n");
		system("PAUSE");
		return 0;
	}
	
	switch(op)
	{
		case 1 :
			printf("Insira o valor da Corrente (amperes): ");
			scanf("%f", &I);
			printf("Insira o valor da Resistencia (ohms): ");
			scanf("%f", &R);
			
			V=I*R;
			
			if ( !I || !R) //Caso algum dos valores inseridos seja = 0.
				printf("\nOs valores inseridos nao podem ser calculados.\n\n");
			else
				printf("\nO valor calculado da Tensao eh %.2fV.\n\n", V);
		break;
		case 2 : 
			printf("Insira o valor da Tensao (volts): ");
			scanf("%f", &V);
			printf("Insira o valor da Resistencia (ohms): ");
			scanf("%f", &R);
			
			I=V/R;
			
			if ( !V || !R) //Caso algum dos valores inseridos seja = 0.
				printf("\nOs valores inseridos nao podem ser calculados.\n\n");
			else
				printf("\nO valor calculado da Corrente eh %fA.\n\n", I);
		break;
		case 3 :
			printf("Insira o valor da Tensao (volts): ");
			scanf("%f", &V);
			printf("Insira o valor da Corrente (amperes): ");
			scanf("%f", &I);
			
			R=V/I;
			
			if ( !I || !V) //Caso algum dos valores inseridos seja = 0.
				printf("\nOs valores inseridos nao podem ser calculados.\n\n");
			else
				printf("\nO valor calculado da Resistencia eh %.2fohms.\n\n", R);
	}
	
	system("PAUSE");
}