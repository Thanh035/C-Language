#include<stdio.h>

int main()
{
	int n;
	printf("Nhap n: ");scanf("%d",&n);
	
	int F;
	int i;
	printf("F(n) = ");
	for(i=1;i<=n;i++)
	{	
		if(i==1 || i==2)
		{
			F=1;
		}
		else
		{
			int F1,F2,j;
		     F=F1=F2=1;
		     for(j=3;j<=i;j++){
		        F=F1+F2;
		        F1=F2;
		        F2=F;
		     }
		}
		if(F>=n)
		break;
		printf("%d ",F);
	}
	
	return 0;
}
