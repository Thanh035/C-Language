#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void Bai1(int n);
void Bai2(int n);
void Bai3(int n);

int main(int argc, char const *argv[])
{
    int n;
    printf("Nhap n: ");scanf("%d",&n);

    printf("Bai 1: \n");
    Bai1(n);
    printf("\n\nBai 2:\n");
    Bai2(n);
    printf("\n\nBai 3:\n");
    Bai3(n);
}

void Bai1(int n)
{
    int count = 1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<count;j++)
        {
            printf("*");
        }
        count++;
        printf("\n");
    }
}

void Bai2(int n)
{
    int space=1;
    while(n--)
    {
        for(int i=0;i<n;i++)
        {
            printf(" ");
        }

        for(int j=0;j<space;j++)
        {
            printf("*");
        }
        space++;
        printf("\n");
    }
}

void Bai3(int n)
{
   
   for(int i=1;i<=n;i++) 
   {
      for(int j=1;j<=n-i;j++)
         printf(" ");
 
      for(int j=1;j<=i;j++)
         printf("* ");
 
      printf("\n");
   }
}