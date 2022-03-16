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
    printf("-------In ket qua---------\n");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}