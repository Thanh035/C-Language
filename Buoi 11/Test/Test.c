#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int IsPrime(int number)
{
    if(number < 2)
    return 0;
    for(int i=2;i<number;i++)
        if(number % i ==0)
        {
            return 0;
        }
        return 1;
}

int main(int argc, char const *argv[])
{
    int num;
    printf("Exercise 1: \n");
    printf("InputNumber: ");
    scanf("%d",&num);
    if(IsPrime(num) == 1)
    {
        printf("%d is a prime number",num);
    }
    else
    {
        printf("%d is not a prime number",num);
    }

    printf("\n\nExercise 2: \n");
    int n,m;
    printf("Please, enter a number: ");
    printf("\n+ n: ");scanf("%d",&n);
    printf("+ m: ");scanf("%d",&m);
    printf("The prime numbers between %d and %d:",n,m);
    for(int i=n;i<=m;i++)
    {
        if(IsPrime(i) == 1)
        {
            printf("\n%d",i);
        }
    }
    return 0;
}
