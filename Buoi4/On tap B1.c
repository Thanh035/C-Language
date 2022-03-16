#include<stdio.h>

int main()
{
	//Bai 1
	printf("Bai 1\n");
	int n;
	printf("Nhap so n: ");scanf("%d",&n);
	
	int S=0;
	int i=1;
	for(;i<=n;i++)
	{
		S+=i;
	}
	printf("S(n) = %d",S);
	return 0;
}
