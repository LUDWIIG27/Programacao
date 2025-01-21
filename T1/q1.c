#include <stdio.h>
#include <stdlib.h>

int main () {
	int inb, outb, vrb, powc; //inb = horario de entrada no banho, outb = horario de saida, vrb = variacao do horario, powc = potencia do chuveiro 
	float vkwh, precob; //vkwh = valor do kilowatt hora, precob = preco do banho
	
	printf("Este programa calcula seu gasto em um determinado banho.\n\n");
	
	printf("Insira a potencia do seu chuveiro: ");
	scanf("%d", &powc);
	
	printf("Insira o horario da sua entrada no banho: ");
	scanf("%d", &inb);
	
	printf("Insira o horario da sua saida no banho: ");
	scanf("%d", &outb);
	
	printf("Insira o valor do KWh: \n");
	scanf("%f", &vkwh);
	
	//se inb antes de 00:00 e outb após 00:00
	if (inb > outb)
		vrb = (outb+24) - inb;
	else //se inb e outb antes de 00:00
		vrb = outb - inb;
	
	precob = (vrb*powc*vkwh)/1000;
	
	printf("Seu banho custou R$%.2f.\n\n", precob);
	system("PAUSE");
}