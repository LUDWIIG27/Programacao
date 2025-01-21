#include <stdio.h>
#include <stdlib.h>

int main () {
	float Qesp, PrcE, PrcKgC; //Qesp = Quantidade de espetos vendidos, PrcE = Preco de cada espetinho, PrcKgC= preco do Kg da carne
	float CpE, Gesp, Lucro; // CpE = quantide de carne para fazer os espetos, Vesp = Ganho total com os espetos
	
	printf("Insira a quantide de espetinhos vendidos: ");
	scanf("%f", &Qesp);
	
	printf("Insira o preco dos espetinhos: ");
	scanf("%f", &PrcE);
	
	printf("Insira o preco por Kg de carne: ");
	scanf("%f", &PrcKgC);
	
	CpE = Qesp/5;
	Gesp = Qesp*PrcE;
	Lucro = Gesp - (CpE*PrcKgC);
	
	printf("Quantidade de carne necessaria: %.fKg\n", CpE);
	printf("Ganho total com a venda dos espetinhos: R$%.f\n", Gesp);
	printf("Lucro total: R$%.f\n", Lucro);
	system("PAUSE");
}