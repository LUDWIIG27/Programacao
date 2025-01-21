#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	float R1 = 10, 
	R2 = 2.2, 
	R3 = 27, 
	R4 = 47, 
	R5 = 68, 
	R345 = pow(pow(R3,-1)+pow(R4,-1)+pow(R5,-1),-1),
	Req = R1+R2+R345;
	printf("O valor da resistencia equivalente do circuito: %fK ohms\n", Req);
	system("pause");
}