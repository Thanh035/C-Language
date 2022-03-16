#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p;
    p = (int *) malloc(10*sizeof(int));  //cap phat mang p

    int sum=0;
    for(int i=0;i<10;i++)
    {
        printf("Nhap p[%d]: ",i);
        scanf("%d",p+i);
        if((p[i]) % 2 == 0)
        {
            sum+=p[i];
        }
    }
    printf("Tong cac so chia het cho 2 trong mang p = %d",sum);
    return 0;
   
}