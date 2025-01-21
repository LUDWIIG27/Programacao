#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
	float kg, Pkg, desc, vt, vtd;
	int frt;
	
	printf("Selecione qual tipo de fruta sera comprada.\n1. Bergamota\n2. Laranja\n3. Banana\nSua escolha foi: ");
	scanf("%d", &frt);
	
	if (frt<1 || frt>3)
	{
		printf("\nA fruta escolhida eh invalida!\n\n");
		system("PAUSE");
		return 0;
	}
	
	printf("\nAgora insira a quantidade de peso das frutas a serem compradas (em kilos): ");
	scanf("%f", &kg);
	printf("\nAgora insira o preco p/ Kg da fruta: ");
	scanf("%f", &Pkg);
	
	
	switch(frt)
	{
		case 1 : 
			vt = kg*Pkg;
			if (kg > 1.5 && kg <= 3)
			{
				vtd=vt-vt*0.05,
				printf("\nFruta: Bergamota\nPeso: %.2f kg\nValor total da compra: R$ %.2f \nDesconto: 5.00%%\nValor total com desconto: R$ %.2f\n", kg, vt, vtd);
			}
			else 
			{ 
				if(kg > 3)
				{
				vtd=vt-vt*0.1,
				printf("\nFruta: Bergamota\nPeso: %.2f kg\nValor total da compra: R$ %.2f \nDesconto: 10.00%%\nValor total com desconto: R$ %.2f\n", kg, vt, vtd);
				}
				else
				printf("\nFruta: Bergamota\nPeso: %.2f kg\nValor total da compra: R$ %.2f \n", kg, vt);
			}
					
		break;
		
		case 2 : 
			vt = kg*Pkg;
				if (kg > 2 && kg <= 4.5)
				{
					vtd=vt-vt*0.1,
					printf("\nFruta: Laranja\nPeso: %.2f kg\nValor total da compra: R$ %.2f \nDesconto: 10.00%%\nValor total com desconto: R$ %.2f\n", kg, vt, vtd);
				}
				else 
				{ 
					if(kg > 4.5)
					{
					vtd=vt-vt*0.2,
					printf("\nFruta: Laranja\nPeso: %.2f kg\nValor total da compra: R$ %.2f \nDesconto: 20.00%%\nValor total com desconto: R$ %.2f\n", kg, vt, vtd);
					}
					else
					printf("\nFruta: Laranja\nPeso: %.2f kg\nValor total da compra: R$ %.2f\n", kg, vt);
				}
		break;
		
		case 3 :
			vt = kg*Pkg;
			
			if ( kg > 3)
			{
				vtd=vt-vt*0.15,
				printf("\nFruta: Banana\nPeso: %.2f kg\nValor total da compra: R$ %.2f \nDesconto: 15.00%%\nValor total com desconto: R$ %.2f\n", kg, vt, vtd);
			}
			else 
				printf("\nFruta: Banana\nPeso: %.2f kg\nValor total da compra: R$ %.2f \n", kg, vt);
	}
	
	system("PAUSE");
}