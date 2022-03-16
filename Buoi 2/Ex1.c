#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	printf("Viet chuong trình nhap vào mot so a bat ky và in ra giá tri a2, a3, a4");
	int a;
	printf("\nNhap a: ");scanf("%d",&a);
	
	printf("a^2 = %d",a*a);
	printf("\na^3 = %d",a*a*a);
	printf("\na^4 = %d",a*a*a*a);
	//
	printf("\n\nViet chuong trình doc tu bàn phím 3 so nguyên bieu dien ngày, tháng, nam và xuat ra màn hình duoi dang 'dd/mm/yyyy'");
	int ngay,thang,nam;
	printf("\nNgay: ");scanf("%d",&ngay);
	printf("Thang: ");scanf("%d",&thang);
	printf("Nam: ");scanf("%d",&nam);
	
	printf("Ket qua: %d/%d/%d",ngay,thang,nam);
	//
	printf("\n\nViet chuong trình d?c và 2 s? th?c vào in ra k?t qu? c?a phép (+), phép tr? (-), phép nhân (*), phép chia (/).");
	float so1,so2;
	printf("\nSo thuc 1: ");scanf("%f",&so1);
	printf("So thuc 2: ");scanf("%f",&so2);
	
	printf("%f + %f = %f",so1,so2,so1+so2);
	printf("\n%f - %f = %f",so1,so2,so1-so2);
	printf("\n%f * %f = %f",so1,so2,so1*so2);
	printf("\n%f / %f = %f",so1,so2,so1/so2);
	return 0;
}
