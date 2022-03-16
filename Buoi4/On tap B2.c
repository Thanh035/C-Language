#include<stdio.h>
#include<math.h>
int main()
{
	printf("Bai 2\n");
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	
	int S=0;
	int i=1;
	for(;i<=n;i++)
	{
		S+=pow(i,2);
	}
	printf("S(n) = %d",S);
	
}
