#include<stdio.h>

int main()
{
	printf("Bai 5\n");
	int n;
	printf("Nhap n: ");scanf("%d",&n);
	
	float S=0;
	int i=0;
	for(i;i<=n;i++)
	{
		S+=(float)1/(2*i+1);
	}
	
	printf("S(n) = %f",S);
	return 0;
}
