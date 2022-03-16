#include<stdio.h>
#include<math.h>

int main()
{
	printf("Giai phuong trinh bac 2: ax2 + bx + c = 0\n");
	float a,b,c;
	printf("Nhap a: ");scanf("%f",&a);
	printf("Nhap b: ");scanf("%f",&b);
	printf("Nhap c: ");scanf("%f",&c);
	
	if(a!=0)
	{
		float Delta = pow(b,2)-4*a*c;
	
		if(Delta > 0)
		{
			float x1=(-b+sqrt(Delta))/(2*a);
			float x2=(-b-sqrt(Delta))/(2*a);
			printf("\nPhuong trinh co 2 nghiem phan biet x1 = %f\tx2 = %f",x1,x2);
		}
		else if(Delta == 0)
		{
			float x = (-b)/(2*a);
			printf("\nPhuong trinh co nghiem kep x1 = x2 = %f",x);
		}
		else 
		{
			printf("\nPhuong trinh vo nghiem");
		}
	}
	else
	{
		if(b != 0)
		{
			float x=(-c)/b;
			printf("\nPhuong trinh co 1 nghiem don x = %f",x);
		}
		else
		{
			if(c==0)
			{
				printf("\nPhuong trinh vo so nghiem");
			}
			else
			{
				printf("\nPhuong trinh vo nghiem");
			}
		}
	}

	return 0;
}






