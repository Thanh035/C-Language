#include<stdio.h>

int main()
{
	float a,b;
	printf("Phuong trinh bac nhat co dang: ax+b=0");
	printf("\nNhap a: ");scanf("%f",&a);
	printf("Nhap b: ");scanf("%f",&b);
	
	printf("=======Ket qua======");
	if(a != 0)
	{
		float x=-b/a;
		if(x==0)
		x=0;
		printf("\nx = %f",x);
	}
	else 
	{
		if(b != 0)
		{
			printf("\nPhuong trinh vo nghiem");
		}
		else
		{
			printf("\nPhuong trinh vo so nghiem");
		}
	}
	
	return 0;
}
