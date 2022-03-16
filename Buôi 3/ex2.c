#include<stdio.h>

int main()
{
	int a1,a2,a3,a4;//Nhap lieu
	printf("Nhap a1: ");scanf("%d",&a1);
	printf("Nhap a2: ");scanf("%d",&a2);
	printf("Nhap a3: ");scanf("%d",&a3);
	printf("Nhap a4: ");scanf("%d",&a4);
	
	int max=a1; //Tim gia tri max
	if(a2 > max)
	max = a2;
	if(a3 > max)
	max = a3;
	if(a4 > max)
	max =a4;
	
	int min = a1; //Tim gia tri min
	if(a2 < min)
	min = a2;
	if(a3 < min)
	min = a3;
	if(a4 < min)
	min = a4;
	//In ket qua
	printf("\nMax = %d",max);
	printf("\nMin = %d",min);
	return 0;
}
