#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int menu, maquinas, mapa;
	//Ovas Maturadas de Lenda: 7042/~4d$
	//Queijo de Cabra Iridio: 1120/7.2d$  (28Q/7d) total: 31.360$/7
	//Vinho de Ancient: 2310/7d$
	//
	//Mel de Fada: 952/~4d$
	//Oleo de Trufas: 1492$/d
	//Maionese de Pato: 525$/2d
	//Maionese Dourada: 399$/d
	//Maionese Nula: 345$/d
	//Cha Verde: 70k$
	//Diamante: 974$  (60D/5d) \ 11.688/d \ 58,440/5d  \ 327.264/Estacao se 60 Crsitalarios (Tentar + 124)
	
	printf("Selecione qual eh seu mapa:\n1(Padrao)\n2(Entre Riachos)\n3(Floresta)\n4(Colina)\n");
	printf("5(Remota)\n6(Quatro Cantos)\n7(Praia)\n8(Prado)\n");
	scanf("%d", &mapa);
	
	while(mapa<1 || mapa>8){
		printf("\nDados incompativeis, tente novamente:\n");
		scanf("%d", &mapa);
	}
	
	while(1){
		system("cls");
	
		printf("\n1(Financas)\n2(Maquinas)\n");
		scanf("%i",&menu);
		
		if(menu==0) break;
		
		switch (menu) {
			
			case 1 :
			
			printf("\nFinancas:\n");
			
			int ovas, queijo, mayo, mayopato, mayonula, ancVinho, ancSeco; 
			int want;
			
			printf("\nQuantos ouros voce quer?\n");
			scanf("%d", &want);
			
			
			
				break;
			case 2 :
				
			printf("\nMaquinas:\n");
			
			printf("\n1(Jarra)\n2(Barril)\n3(Apiario)\n4(Cristalario)\n5(Torneira Pesada)\n");
			scanf("%i",&maquinas);
			
			if(maquinas==0) break;
			
			int barris, jarras, apiario, cristalario, tapper, possui;
			int log, rock, coal, iron, cobre, gold, hardlog, radio, total;
			int plog, prock, pcoal, pcobre, piron, pgold, phardlog;
			int alog=0, arock=0, acoal=0, acobre=0, airon=0, agold=0, ahardlog=0, aradio=0;
			
			switch (maquinas) {
				
				case 1 :
					printf("\n\nJarras:\n");
					scanf("%i",&jarras);
					printf("\nJa possui algum material? 1(sim) 2(nao)\n");
					scanf("%d",&possui);
					if(possui==1){
						printf("\nMadeira: "); scanf("%d",&alog);	
						printf("\nPedra: "); scanf("%d",&arock);	
						printf("\nCarvao: "); scanf("%d",&acoal);	
					}
					log = jarras*50-alog;
					rock = jarras*40-arock;
					coal = jarras*8-acoal;
					plog = log*50;
					prock = rock*100;
					pcoal = coal*250;
					total = pcoal+prock+plog;
					
					printf("\n\nMadeiras: %d - %d$\nPedras: %d - %d$\nCarvao: %d - %d$\nTotal: %d$\n\n", log, plog, rock, prock, coal, pcoal, total);
					
					break;
				case 2 :
					printf("\n\nBarris:\n");
					scanf("%i",&barris);
					printf("\nJa possui algum material? 1(sim) 2(nao)\n");
					scanf("%d",&possui);
					if(possui==1){
						printf("\nMadeira: "); scanf("%d",&alog);	
						printf("\nFerro: "); scanf("%d",&airon);	
						printf("\nCobre: "); scanf("%d",&acobre);	
						printf("\nCarvao: "); scanf("%d",&acoal);	
					}
					log = barris*30-alog;
					iron = barris*5-airon;
					cobre = barris*5-acobre;
					coal = barris*2-acoal;
					plog = log*50;
					pcobre = cobre*150;
					piron = iron*250;
					pcoal = coal*250;
					total = pcoal+piron+pcobre+plog;
					
					printf("\n\nMadeiras: %d - %d$\nCobres: %d - %d$\nFerros: %d - %d$\nCarvao: %d - %d$\nResinas: %d\nTotal: %d$\n\n", log, plog, cobre, pcobre, iron, piron,coal, pcoal, barris, total);	
					
					break;
				case 3 :
					printf("\n\nApiarios:\n"); 
					scanf("%i",&apiario);
					printf("\nJa possui algum material? 1(sim) 2(nao)\n");
					scanf("%d",&possui);
					if(possui==1){
						printf("\nMadeira: "); scanf("%d",&alog);
						printf("\nFerro: "); scanf("%d",&airon);	
						printf("\nCarvao: "); scanf("%d",&acoal);	
					}
					log = apiario*40-alog;
					iron = apiario*5-airon;
					coal = apiario*9-acoal;
					plog = log*50;
					piron = iron*250;
					pcoal = coal*250;
					total = pcoal+piron+pcobre+plog;
					
					printf("\n\nMadeiras: %d - %d$\nFerros: %d - %d$\nCarvao: %d - %d$\nAcer: %d\nTotal: %d$\n\n", log, plog, iron, piron,coal, pcoal, apiario, total);	
					
					break;
				case 4 :
					printf("\n\nCristalarios:\n"); 
					scanf("%i",&cristalario);
					printf("\nJa possui algum material?\n1(sim) 2(nao)\n");
					scanf("%d",&possui);
					if(possui==1){
						printf("\nOuro: "); scanf("%d",&agold);	
						printf("\nPedra: "); scanf("%d",&arock);	
						printf("\nCarvao: "); scanf("%d",&acoal);	
					}
					gold = cristalario*25-agold;
					rock = cristalario*99-arock;
					coal = cristalario*7-acoal;
					prock = rock*100;
					pgold = gold*750;
					pcoal = coal*250;
					total = pcoal+pgold+prock;
					
					printf("\n\nPedras: %d - %d$\nOuro: %d - Barras: %d - %d$\nIridio: %d - Barras: %d", rock, prock, gold, gold/5, pgold, cristalario*10, cristalario*2);
					printf("\nCarvao: %d - %d$\nPilhas: %d\nTotal: %d$\n\n", coal, pcoal, cristalario,  total);
					
					break;
				case 5 :
					printf("\n\nTorneiras Pesadas:\n"); 
					scanf("%i",&tapper); 
					printf("\nJa possui algum material? 1(sim) 2(nao)\n");
					scanf("%d",&possui);
					if(possui==1){
						printf("\nMadeira de Lei: "); scanf("%d",&ahardlog);
						printf("\nRadio: "); scanf("%d",&aradio);	
						printf("\nCarvao: "); scanf("%d",&acoal);	
					}int florest;
					if(mapa==3) florest=12;
					else if(mapa==6) florest=2;
					else florest=0;
					
					hardlog = tapper*30-alog;
					radio = tapper*5-aradio;
					coal = tapper*1-acoal;
					phardlog = 12+florest;
					pcoal = coal*250;
					
					printf("\n\nMadeiras de Lei: %d", hardlog);
					printf("\n(Voce consegue ao menos %d Madeiras de Lei por dia, voce consegue mais nos andares 41-69 das minas perigosas)", phardlog);
					printf("\nRadio: %d \nCarvao: %d - %d$\n\n", radio, coal, pcoal);
					break;
				}
				break;
			}
			system("PAUSE");
		}
		system("PAUSE");
		return 0;
	}
