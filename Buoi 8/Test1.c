#include<stdio.h>
#include<math.h>
#define true 1
#define false 0
#include<string.h>
#include<stdlib.h>

int main()
{
    printf("Bai1:\n");
    int n;
    printf("Nhap vao so nguyen N bat ki: ");
    scanf("%d",&n);

    int sum=0;
    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }
    printf("Tong cac phan tu trong so nguyen la: %d\n",sum);


    printf("\nBai2:\n");
    



    printf("\nBai 3:\n");
    char x[100];
    int value;
    printf("Nhap so nguyen tu ban phim: ");
    fflush(stdin);fflush(stdout);
    gets(x);
    int i,length;
    length = strlen(x);
    
    int total =0;
    for( i=0;i<length;i++)
    {
        value = x[i] - '0';
        printf("%d",value);
        total+=value;
    }

    if(total %3 ==0)
    {
        printf("\nSo nguyen chia het cho 3");
    }
    else
    {
        printf("\nSo nguyen khong chia het cho 3");
    }
    return 0;
} 