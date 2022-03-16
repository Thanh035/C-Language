#include <stdio.h>
#include <stdlib.h>
#include<math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a,b,c,d,e,f;
	printf("a = ");scanf("%d",&a);
	printf("b = ");scanf("%d",&b);
	printf("c = ");scanf("%d",&c);
	printf("d = ");scanf("%d",&d);
	printf("e = ");scanf("%d",&e);
	printf("f = ");scanf("%d",&f);
	
	unsigned int x,y;
	x=pow(a,6) + b*c*d + e*f;
	y=pow(a,3) * pow(b,2) +a*b*d*e*f;
	
	printf("x = a^6 + bcd + ef = %u",x);
	printf("\ny = a^3 + b^2 + abdef = %u",y);	
	return 0;
}
