/*
	Faltou inicializar as variáveis Clientes e PesoTotalBagre.
	Questão parcialmente correta.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	
	int Menu, Clientes, Ling=0; //Ling: linguado (igualei a zero pois por algum motivo ele inicia em 16) 
	float PesoPeixe, PesoTotalBagre;
	
do{		
	printf("\nInsira o valor desejado para as seguintes funcoes(1.Bagre 2.Linguado 3.Fim):\n");//Menu
	scanf("%d", &Menu);
	while(Menu!=1 && Menu!=2 && Menu!=3){
		printf("\nValor invalido!!\n\nTente novamente:\n");//Valida os valores do Menu
		scanf("%d", &Menu);
	}
	if(Menu==3) break;
	
	Clientes++;//Soma a quantidade de clientes que fizeram uma compra
	
	printf("\nInsira o peso do peixe em Kg:\n");//Peso do Peixe
	scanf("%f", &PesoPeixe);
	
	while(PesoPeixe<=0){
		printf("\nPeso invalido!!\n\nTente novamente:\n");//Valida os valores do peso
		scanf("%f", &PesoPeixe);
	}
	
	if(Menu==2 && 1.5<=PesoPeixe && PesoPeixe<=2.5) Ling++;//Verifica se houve a compra de um linguado e se pesa entre 1,5 e 2,5 Kg
	
	if(Menu==1) PesoTotalBagre+=PesoPeixe;//Verifica se hpuve a compra de um bagre e soma seu peso
}while(1);
	
printf("\nTotal de Clientes: %d\n", Clientes);
printf("\nClientes que compraram de 1,5 a 2,5Kg de Linguado: %d\n", Ling);
printf("\nPeso total de Bagres vendidos: %.2fKg\n\n", PesoTotalBagre);
	
system("PAUSE");
return 0;
}