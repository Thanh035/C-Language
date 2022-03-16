#include<stdio.h>
#define MAX 100

int main()
{
    int n,arr[MAX];
    printf("Nhap so phan tu vao mang n: ");
    scanf("%d",&n);
    printf("Nhap phan tu vao mang: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int tmp[MAX];
    int i=0;
        for(int j=n-1;j>=0;j--)
        {
            tmp[i] = arr[j];
            i++;
        }
    
    
    for(int i=0;i<n;i++)
    {
        arr[i] = tmp[i];
    }

    printf("Mang sau sau khi hoan vi nguoc lai: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0; 
}