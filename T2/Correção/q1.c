/*
	Questão correta.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () 
{
	float seg, kg, Pts; //seg: tempo, kg: peso da abobora, Pts: Pontuacao.
	int idd, id; //idd: entrada da idade e varivel p/ switch, id: peso dos pontos da categoria idade.
	
				
	printf("Insira nos seguintes campos.\n\nA sua idade: ");
	scanf("%d", &idd);
	
	printf("\nO peso da sua abobora (em Kilos): ");
	scanf("%f", &kg);
	
	printf("\nSeu tempo percorrendo o trajeto (em segundos): ");
	scanf("%f", &seg);
	
		
	if (idd < 18){  //selecionador da categoria idade.
		idd = 1;
		id  = 1;
	}
	else {
		if (idd >= 18 && idd < 50) {
			idd = 2;
			id  = 3;
		}
		else 
			id = 5;
	}
	
	if (seg <= 30) //selecionador da categoria tempo.
		seg = 2;
	else 
		seg = 1;
	
	switch(idd){ //calculador de pontuacao por categoria e saida de dados (categoria e pontuacao).
		case 1 : Pts = (id+seg)*kg;
				if (seg <= 30)
				printf("\nParabens! Voce esta na categoria Jovem ate 30 segundos e fez %.f Pontos.\n\n", Pts);
				else
				printf("\nParabens! Voce esta na categoria Jovem acima de 30 segundos e fez %.f Pontos.\n\n", Pts);
			break;
		case 2 : Pts = (id+seg)*kg;
				if (seg <= 30)
				printf("\nParabens! Voce esta na categoria Adulto ate 30 segundos e fez %.f Pontos.\n\n", Pts);
				else
				printf("\nParabens! Voce esta na categoria Adulto acima de 30 segundos e fez %.f Pontos.\n\n", Pts);
			break;
		default : Pts = (id+seg)*kg;
				if (seg <= 30)
				printf("\nParabens! Voce esta na categoria Senior ate 30 segundos e fez %.f Pontos.\n\n", Pts);
				else
				printf("\nParabens! Voce esta na categoria Senior acima de 30 segundos e fez %.f Pontos.\n\n", Pts);			
	}
	
	// ex. do calculo: idade =  57 anos (peso 5), peso abobora = 10 kg, tempo = 30 seg (peso 2) -> (5+2)*10 = 7*10 = 70 pontos.
	
	system("pause");
}