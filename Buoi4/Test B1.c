#include<stdio.h>

int main()
{
    printf("Bai 1:Tinh giaithua n!\n");
    int n;
    printf("Nhap n: ");scanf("%d",&n);

    int giaithua=0;
    for(int i=0;i<=n;i++)
    {
        giaithua+=i;
    }
    
    printf("Giai thua n! = %d",giaithua);
    return 0;
}