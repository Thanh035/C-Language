#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	
	int a1,a2,a3,b1,b2,b3,c1,c2,c3;
	printf("Nhap a1,a2,a3: ");scanf("%d %d %d",&a1,&a2,&a3);
	printf("Nhap b1,b2,b3: ");scanf("%d %d %d",&b1,&b2,&b3);

	float D,Dx,Dy;
	D=a1*b2-a2*b1;
	Dx=c1*b2-c2*b1;
	Dy=a1*c2-a2*c1;
	
	printf("\n-----------Ket qua-----------\n");
	if(D==0)
	{
		if(Dx+Dy==0)
		{
			printf("\nPhuong trinh vo so nghiem");
		}
		else
		{
			printf("\nPhuong trinh vo nghiem");
		}
	}
	else
	{
		float x=Dx/D;
		float y=Dy/D;
		printf("\nPhuong trinh co nghiem: x = %f\ty=%f",x,y);
	}
	
return 0;
}
