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
	
	if(con1==1){{{{{{{{{
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
						if(con5==1){
						printf("Insira o valor da resistencia 6: ");
						scanf("%d" "%d" "%f",&con6,&rps6,&r6);
						}}
							if(con6==1){
							printf("Insira o valor da resistencia 7: ");
							scanf("%d" "%d" "%f",&con7,&rps7,&r7);
							}}
								if(con7==1){
								printf("Insira o valor da resistencia 8: ");
								scanf("%d" "%d" "%f",&con8,&rps8,&r8);
								}}
									if(con8==1){
									printf("Insira o valor da resistencia 9: ");
									scanf("%d" "%f",&rps9,&r9);
								}}
	}
	
	if (rps1==1){
		R1 = r1*r2/(r1+r2), 
		R2 = 0;
	}
		else R1=r1;
	if (rps2==1){
		R2 = r2*r3/(r2+r3),
		R3 = 0;
	}
		else R2=r2;
	if (rps3==1){
		R3 = r3*r4/(r3+r4),
		R4 = 0;
	}
		else R3=r3;
	if (rps4==1){
		R4 = r4*r5/(r4+r5),
		R5 = 0;
	}
		else R4=r4;
	if (rps5==1){
		R5 = r5*r6/(r5+r6),
		R6 = 0;
	}
		else R5=r5;
	if (rps6==1){
		R6 = r6*r7/(r6+r7),
		R7 = 0;
	}
		else R6=r5;
	if (rps7==1){
		R7 = r7*r8/(r7+r8),
		R8 = 0;
	}
		else R7=r7;
	if (rps8==1){
		R8 = r8*r9/(r8+r9),
		R9 = 0;
	}
		else R8=r8;
	if (rps8==0){
		if(rps9==1)
			R9 = r8*r9/(r8+r9);
			else R9=r9;
	}
	
	if (r1=0)
		R1=0;
	if (r2=0)
		R2=0;
	if (r3=0)
		R3=0;
	if (r4=0)
		R4=0;
	if (r5=0)
		R5=0;
	if (r6=0)
		R6=0;
	if (r7=0)
		R7=0;
	if (r8=0)
		R8=0;
	if (r9=0)
		R9=0;
		
	req=R1+R2+R3+R4+R5+R6+R7+R8+R9;
	
	printf("Resistencia equivalente: %.3f ohms\n", req);
	system("pause");
}