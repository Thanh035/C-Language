#include<stdio.h>

int main()
{
    int n;
    int arr[100];
    printf("Nhap n phan tu: ");scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("Nhap phan tu %d: ",i);
        scanf("%d",&arr[i]);
    }printf("\n");

    printf("mang gom cac phan tu: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }printf("\n");

    printf("Mang sau khi chuyen bien thanh: ");
    for(int i=0;i<n;i++)
    {
        if(arr[i] % 2 == 0)
        {
            printf("%d ",arr[i]);
        }
        
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i] % 2!=0)
        {
            printf("%d ",arr[i]);
        }
    }
    return 0;
}