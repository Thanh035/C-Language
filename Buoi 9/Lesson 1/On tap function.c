#include<stdio.h>
#include<math.h>

float Tong(float a,float b)
{
    return a+b;
}

float Hieu(float a,float b)
{
    return a-b;
}

float Tich(float a,float b)
{
    return a*b;
}

float Thuong(float a,float b)
{
    return a/b;
}
int main()
{
    float a,b;
    printf("Nhap a: ");
    scanf("%f",&a);
    printf("Nhap b: ");
    scanf("%f",&b);

    printf("Tong = %f\n",Tong(a,b));
    printf("Hieu = %f\n",Hieu(a,b));
    printf("Tich = %f\n",Tich(a,b));
    printf("Thuong = %f",Thuong(a,b));
    return 0;
}