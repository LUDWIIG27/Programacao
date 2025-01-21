#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	float r1,r2,r3,r4,r5,r6,r7,r8,r9,R1,R2,R3,R4,R5,R6,R7,R8,R9,
	req,req1;
	
	int rps,rps1,rps2,rps3,rps4,rps5,rps6,rps7,rps8,rps9,
	con1,con2,con3,con4,con5,con6,con7,con8,con9;
	
	printf("Digite \"1\" e pressione space caso queira adicionar mais resistores na soma, caso contrario,"),
	printf("digite \"0\".\n");
	
	printf("Digite \"1\" e pressione space antes do valor caso esteja em paralelo com o resistor seguinte,"),
	printf("ou digite \"0\" caso esteja em serie.\n");
	
	printf("Insira o valor da resistencia 1: ");
	scanf("%d" "%d" "%f",&con1,&rps1,&r1);
	
	if(con1==1){{{{{
		printf("Insira o valor da resistencia 2: ");
		scanf("%d" "%d" "%f",&con2,&rps2,&r2);
		}
		if(con2==1){
			printf("Insira o valor da resistencia 3: ");
			scanf("%d" "%d" "%f",&con3,&rps3,&r3);
			}}
				if(con3==1){
				printf("Insira o valor da resistencia 4: ");
				scanf("%d" "%d" "%f",&con4,&rps4,&r4);
				}}
					if(con2==0)
						con4 = 0;
					if(con3=0)
						con4 = 0;
					if(con4==1){
					printf("Insira o valor da resistencia 5: ");
					scanf("%d" "%d" "%f",&con5,&rps5,&r5);
					}}
	}
	
	if (rps1==1){{{{{
		R1 = r1*r2/(r1+r2);
	}
		if (rps2==1){
			R2 = R1*r3/(R1+r3);
		}}
			if (rps3==1){
				R3 = R2*r4/(R2+r4);
			}}
				if (rps4==1){
					R4 = R3*r5/(R3+r5);
				}}
					if (rps5==1){
						R5 = R4*r6/(R4+r6);
					}
	}
	else {
		if(rps2==1,rps1==0){{{{
			R2 = r2*r3/(r2+r3);
		}
			if (rps3==1){
				R3 = R2*r4/(R2+r4);
			}}
				if (rps4==1){
					R4 = R3*r5/(R3+r5);
				}}
					if (rps5==1){
						R5 = R4*r6/(R4+r6);
					}
		}
	else {
		if(rps3==1){{{
			R3 = r3*r4/(r3+r4);
		}}
			if (rps4==1){
				R4 = R3*r5/(R3+r5);
			}}
				if (rps5==1){
					R5 = R4*r6/(R4+r6);
				}
	else {
		if (rps4==1){{
			R4 = r4*r5/(r4+r5);
		}}
			if (rps5==1){
				R5 = R4*r6/(R4+r6);
			}
	else {
		if (rps5==1){
			R5 = r5*r6/(r5+r6);
		}
	}}}}
		
	if (rps1==1)
		R2=0;
	if (rps2==1)
		R3=0;
	if (rps3==1)
		R4=0;
	if (rps4==1)
		R5=0;
		
	req=R1+R2+R3+R4+R5;
	
	printf("Resistencia equivalente: %.3f ohms\n", req);
	system("pause");             
}