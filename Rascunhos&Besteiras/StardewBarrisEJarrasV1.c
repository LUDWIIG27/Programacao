#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int log, rock, coal, menu, /*mb, mj,*/ barris, jarras, total, plog, prock, pcoal, cobre, iron, pcobre, piron;
	
	//Ovas Maturadas de Lenda: 7042/~4d$
	//Queijo de Cabra Iridio: 1120/7.2d$  (28Q/7d) total: 31.360$/7
	//Vinho de Ancient: 2310/7d$
	//Mel de Fada: 952/~4d$
	//Oleo de Trufas: 1492$
	//Maionese de Pato: 525$
	//Maionese Dourada: 399$
	//Maionese Nula: 345$
	//Cha Verde: 70k$
	//Diamante: 974$  (60D/5d) \ 11.688/d \ 58,440/5d  \ 327.264/Estacao se 60 Crsitalarios (Tentar + 124)
	
	while(1){
		system("cls");
	
		printf("\n1(Jarra)\n2(Barril)\n3(Apiario)\n4(Cristalario)\n");
		scanf("%i",&menu);
		
		if(menu==0) break;
		if(menu==1){
			/*printf("\n\n1(Jarra) ou 2(Materiais)\n");
			scanf("%i",&mj);
			
			if(mj==1){*/
				printf("\n\nJarras:\n");
				scanf("%i",&jarras);
				log = jarras*50;
				rock = jarras*40;
				coal = jarras*8;
				plog = log*50;
				prock = rock*100;
				pcoal = coal*250;
				total = pcoal+prock+plog;
				
				printf("\n\nMadeiras: %d - %d$\nPedras: %d - %d$\nCarvao: %d - %d$\n\n", log, plog, rock, prock, coal, pcoal);
				
		/*	}else{
				printf("\n\nMadeira:\n");
				scanf("%i",&log);
				printf("\n\nPedra:\n");
				scanf("%i",&rock);
				printf("\n\nCarvao:\n");
				scanf("%i",&coal);
				
				plog = log*50;
				prock = rock*100;
				pcoal = coal*250;
				total = pcoal+prock+plog;
				
				printf("\n\nMadeiras:%d$\nPedras:&d$\nCarvao:%d$\n", plog, prock, pcoal);
			}*/
		}else{
			/*printf("\n\n1(BArril) ou 2(Materiais)\n");
			scanf("%i",&mb);
			
			if(mb==1){
				
			}else{*/
				printf("\n\nBarris:\n");
				scanf("%i",&barris);
				log = barris*30;
				iron = barris*5;
				cobre = barris*5;
				coal = barris*2;
				plog = log*50;
				pcobre = cobre*150;
				piron = iron*250;
				pcoal = coal*250;
				total = pcoal+piron+pcobre+plog;
				
				printf("\n\nMadeiras: %d - %d$\nCobres: %d - %d$\nFerros: %d - %d$\nCarvao: %d - %d$\nResinas: %d\n\n", log, plog, cobre, pcobre, iron, piron,coal, pcoal, barris);	
			}
			system("PAUSE");
		}
		system("PAUSE");
		return 0;
	}
