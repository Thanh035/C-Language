#include <stdio.h>
#include <stdlib.h>

int main()
{
	//Bai 1
	printf("Bai 1\n");
	int cd,cr;
	printf("Chieu dai: ");scanf("%d",&cd);
	printf("Chieu rong: ");scanf("%d",&cr);
	int Dientich=cd*cr;
	int Chuvi=(cd+cr)*2;
	printf("Dien tich hinh chu nhat la: %d",Dientich);
	printf("\nChu vi cua hinh chu nhat la: %d\n",Chuvi);
	
	//Bai 2
	printf("\nBai 2\n");
	int r;
	printf("Nhap vao ban kinh hinh tron: ");
	scanf("%d",&r);
	double Cv=3.14*2*r;
	double Dt=3.14*(r*r);
	printf("\nDien tich hinh tron la: %lf",Dt);
	printf("\nChu vi hinh tron la: %lf\n",Cv);
	
	//Bai3
	printf("\nBai3");
	int n;
	printf("\nNhap n: ");scanf("%d",&n);
	int sum=n*(1+n)/2;
	printf("%d",sum);
	
	
	return 0;
}
