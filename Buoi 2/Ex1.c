#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	printf("Viet chuong tr�nh nhap v�o mot so a bat ky v� in ra gi� tri a2, a3, a4");
	int a;
	printf("\nNhap a: ");scanf("%d",&a);
	
	printf("a^2 = %d",a*a);
	printf("\na^3 = %d",a*a*a);
	printf("\na^4 = %d",a*a*a*a);
	//
	printf("\n\nViet chuong tr�nh doc tu b�n ph�m 3 so nguy�n bieu dien ng�y, th�ng, nam v� xuat ra m�n h�nh duoi dang 'dd/mm/yyyy'");
	int ngay,thang,nam;
	printf("\nNgay: ");scanf("%d",&ngay);
	printf("Thang: ");scanf("%d",&thang);
	printf("Nam: ");scanf("%d",&nam);
	
	printf("Ket qua: %d/%d/%d",ngay,thang,nam);
	//
	printf("\n\nViet chuong tr�nh d?c v� 2 s? th?c v�o in ra k?t qu? c?a ph�p (+), ph�p tr? (-), ph�p nh�n (*), ph�p chia (/).");
	float so1,so2;
	printf("\nSo thuc 1: ");scanf("%f",&so1);
	printf("So thuc 2: ");scanf("%f",&so2);
	
	printf("%f + %f = %f",so1,so2,so1+so2);
	printf("\n%f - %f = %f",so1,so2,so1-so2);
	printf("\n%f * %f = %f",so1,so2,so1*so2);
	printf("\n%f / %f = %f",so1,so2,so1/so2);
	return 0;
}
