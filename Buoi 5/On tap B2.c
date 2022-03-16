#include<stdio.h>

int  main()
{
    int n;
    printf("Nhap n:");scanf("%d",&n);

    int arr[100];
    printf("-------Nhap mang----------\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("-------Truoc khi hoan vi---------\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",i);
    }printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n-----------Sau khi hoan vi----------\n");
        int i=0;
        
        {
            int tmp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = tmp;
            i++;
        }
    
    for(int i=0;i<n;i++)
    {
        printf("%d ",i);
    }printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}