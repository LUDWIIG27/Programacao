#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	float V = 14,
	I = 0.250,	
	R = V/I;
	printf("A resistencia em R: %fk ohms\n", R);
	system("pause");
}