#include<stdio.h>

int main()
{
    printf("Bai 2:Tinh tong cac so chia het cho 2 va khong chia het cho 3.\nCac so chay tu 1 den n nhap tu ban phim.\n");
    int n;
    printf("Nhap n: ");scanf("%d",&n);

    int Sum=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0 && i%3!=0)
        {
            Sum+=i;
        }
    }

    printf("Ket qua: %d",Sum);
    return 0;
}