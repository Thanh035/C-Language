#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int n,sum = 0;
    printf("Enter n = ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    printf("Sum = %d\n",sum);

    int m;
    sum = 0;
    printf("\nEnter m = ");
    scanf("%d",&m);
    for(int i=n;i<=m;i++)
    {
        if(i % 5 ==0)
        {
            printf("%d ",i);
            sum+=i;
        }
    }
    printf("\nSum = %d\n",sum);

    int k;
    do{
        printf("\nEnter k = ");
        scanf("%d",&k);
        if(k < 0)
        {
            printf("\nInvalid! %d smaller than 0",k);
        }
        else if (k > 10)
        {
            printf("\nInvalid! %d greater than 10",k);
        }
    }while(k < 0 || k > 10);
    
    for(int i=1;i<=10;i++)
    {
        printf("\n%d x %d = %d",k,i,k*i);
    }

    int x,digits = 0;
    printf("\n\nEnter x = ");
    scanf("%d",&x);
    while(x > 0)
    {
        digits += x % 10;
        x/=10;
    }
    printf("Sum of digits: %d",digits);

    return 0;
}



