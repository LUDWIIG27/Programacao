#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	int CdtoA, CdtoB, Nulo, Branco, Mesa, i;
	float PA, PB, Vld, Inv, Total, PInv;
	
	printf("Insira a quantidade de mesas desta secao:\n");
	scanf("%d", &Mesa);
	
	for(i=1;i<=Mesa;i++){
		
		printf("\nContagem de votos da mesa %d\n",i);
		printf("\nInsira a quantidade de Votos do Candidato A:\n");
		scanf("%d", &CdtoA);
		printf("\nInsira a quantidade de Votos do Candidato B:\n");
		scanf("%d", &CdtoB);
		printf("\nInsira a quantidade de Votos Nulos:\n");
		scanf("%d", &Nulo);
		printf("\nInsira a quantidade de Votos Brancos:\n");
		scanf("%d", &Branco);
		
		Vld = CdtoA+CdtoB+Vld;
		Inv = Nulo+Branco+Inv;
		PA = CdtoA+PA;
		PB = CdtoB+PB;
	}
	
	Total = Inv+Vld;
	PA = (PA/Vld)*100;
	PB = (PB/Vld)*100;
	PInv = (Inv/Total)*100;
	
	
	printf("\nPercentual de votos do Candidato A: %.2f%%\n",PA);
	printf("\nPercentual de votos do Candidato B: %.2f%%\n",PB);
	printf("\nPercentual de votos Invalidos: %.2f%%\n",PInv);
	
	
	if (PA == PB)
		printf("\nA eleicao acabou em EMPATE!!\n\n");
	else if(PA > PB)
		printf("\nO Candidato A venceu a eleicao\n\n");
	else
		printf("\nO Candidato B venceu a eleicao\n\n");
	
	system("PAUSE");
	return 0;
}