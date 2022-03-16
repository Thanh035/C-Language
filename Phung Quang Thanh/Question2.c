#include<stdio.h>
#include<stdlib.h>

void printTriangle(int n);
int main(int argc, char const *argv[])
{
    int n;
    printf("n = ");
    scanf("%d",&n);
    
    if(n > 1)
    {
        printf("Test Triangle \n");
        printTriangle(n); 
    }

        FILE *fp;
        fp = fopen("triangle.txt","w");

        if(fp == NULL)
        {
            printf("\nError");
        }
        
        fclose(fp);
        printf("\nFile created and saved successfully!");
    return 0;
}

void printTriangle(int n)
{
    int index = 0;
    while(1)
    {
        for(int j=0;j<=index;j++)
        {
            printf("  ");
        }

        for(int i=1;i<=n;i++)
        {
            printf("# ");
        }

        if(n==1)
        {
            break;
        }
        printf("\n");
        n-=2;
        index++;
    }
}