#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	int Clube, idd, IDD; // idd = idade, IDD = auxiliar idade 15 a 20.
	float Total, BRA, PEL, FAR, PB, PP, PF;
	
	printf("\nInsira o codigo do Clube:\n");
	scanf("%d", &Clube);
	
	while (Clube>=1 && Clube<=3){	
		
		if (Clube == 1)
		BRA++;
		else if (Clube == 2)
		PEL++;
		else
		FAR++;
		
		printf("\nInsira a idade do torcedor:\n");
		scanf("%d", &idd);
		
		if (idd>=15 && idd<=20)
		IDD++;
			
		printf("\nInsira o codigo do Clube:\n");
		scanf("%d", &Clube);
	} 
	
	Total = BRA+PEL+FAR;
	PB = (BRA/Total)*100;
	PP = (PEL/Total)*100;
	PF = (FAR/Total)*100;
	
	printf("\nPercentual torcedores do Brasil: %.2f%%\n",PB);
	printf("\nPercentual torcedores do Pelotas: %.2f%%\n",PP);
	printf("\nPercentual torcedores do Farroupliha: %.2f%%\n",PF);
	printf("\nQuantidade de torcedores de 15 a 20 anos: %d\n",IDD);
	
	system("PAUSE");
	return 0;
}