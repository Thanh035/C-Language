#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{	
	int a,b,c;
	unsigned long int d;
	a = 1123;
	b = 115;
	c = 86;
	d = 10 * a * a + 5 * b * c + c * c;
	printf("d = %lu",d);
	return 0;
}
