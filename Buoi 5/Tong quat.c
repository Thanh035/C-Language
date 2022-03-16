#include<stdio.h>
#include<math.h>
#define MAX 100

void EnterArray(int n,int a[])
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

void SelectionSort(int n,int a[])
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i] < a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

int main()
{
    int n;
    int arr[MAX];
    printf("Nhap so tu n vao mang: ");
    scanf("%d",&n);
    printf("Nhap phan tu: ");
    EnterArray(n,arr);

    SelectionSort(n,arr);

    printf("Mang sau khi sap xep la: ");
    PrintArray(n,arr);
    return 0;
}