#include<stdio.h>

int main()
{
	printf("Bai 3\n");
	int n;
	printf("Nhap n: ");scanf("%d",&n);
	
	float S=0;
	int i=1;
	do
	{
		S+=1.0/i;
		i++;
	}while(i<=n);
	
	printf("S(n) = %f",S);
	return 0;
}
