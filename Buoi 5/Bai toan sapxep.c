#include<stdio.h>
#include<math.h>
#define MAX 100

void EnterArray(int n;int a[])
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }printf("\n");
}

void PrintArray(int n,int a[])
{   
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int n;
    int arr[MAX];
    printf("Nhap phan tu vao mang: ")
    EnterArray(n,arr);


    printf("Mang sau khi sap xep la: ");
    PrintArray(n,arr);
    return 0;
}