#include<stdio.h>

int main()
{
    int n;
    printf("Nhap N phan tu vao mang t: ");
    scanf("%d",&n);
    int t[n];

    //Su dung con tro
    int *p;
    p = &t[n];
    //Nhap cac phan tu mang
    for(int i=0;i<n;i++)
    {
        printf("Nhap phan tu t[%d]: ",i);
        scanf("%d",p+i);
    }
    //Hien thi ket qua(in mang)
    printf("\nMang t bao gom cac phan tu: ");
    for(int i=0;i<n;i++)
    {
        printf("\nt[%d] = %d",i,*p+i);
    }
    //In tong cac phan tu chia het cho 3
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if((*p+i) %3 ==0)
        {
            sum=*p+i;
        }
    }
    printf("\n\nTong cac phan tu chia het cho 3 la: %d",sum);
    return 0;
}