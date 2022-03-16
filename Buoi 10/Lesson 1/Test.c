#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

void EnterArray(int n,int a[])
{
    for(int i=0;i<n;i++)
    {
        printf("Phan tu %d: ",i);
        scanf("%d",&a[i]);
    }
}

int TongChiaHet5(int n,int a[])
{
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i] % 5 ==0)
        {
            sum+=a[i];
        }
    }
    return sum;
}

void SquareNum(int n,int a[])
{
    int i;
    int count=0;
    for( i=0;i<n;i++)
    {
        int tmp = sqrt(a[i]);
        if(pow(tmp,2) == a[i])
        {
        printf("%d ",a[i]);
        count++;
        }
    }    
}
void ArraySort(int n,int a[])
{
    int b[n];
    int index = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i] % 2 ==0)
        {
            b[index] = a[i];
            index++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i] % 2 !=0)
        {
            b[index] = a[i];
            index++;
        }
    }

    for(int i=0;i<n;i++)
    {
        a[i] = b[i];
    }
}

void PrintArray(int n,int a[])
{
    for(int i=0;i<n;i++)
    {
        printf("\nPhan tu %d: %d",i,a[i]);
    }
}

typedef struct SinhVien
{
    char name[50],rollno[50];
    int age;
} SVien;

int CheckSquareNum(int x)
{
    int tmp=sqrt(x);
    if(pow(tmp,2) == x)
    return x;
    return 0;
}
int main(int argc, char const *argv[])
{
    printf("Bai 1\n");
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    int arr[n];
    EnterArray(n,arr);
    printf("Tong cac so chia het cho 5 la: %d\n",TongChiaHet5(n,arr));
    printf("Cac so chinh phuong trong mang la: ");SquareNum(n,arr);
    printf("\nCac phan tu trong mang sau sap xep la: ");
    ArraySort(n,arr);
    PrintArray(n,arr);

    printf("\n\nBai 2:\n");
    int N;
    printf("Nhap N: \n");
    scanf("%d",&N);
    SVien List[N];
    for(int i=0;i<N;i++)
    {
        printf("Ten sinh vien thu %d: ",i+1);
        fflush(stdin);fflush(stdout);
        gets(List[i].name);
        printf("Ma sinh vien thu %d: ",i+1);
        fflush(stdin);fflush(stdout);
        gets(List[i].rollno);
        printf("Tuoi sinh vien thu %d: ",i+1);
        fflush(stdin);fflush(stdout);
        scanf("%d",&List[i].age);
    }
    printf("\n");
    for(int i=0;i<N;i++)
    {
        if(CheckSquareNum(List[i].age) != 0)
        {
            printf("\nTen sinh vien thu %d: ",i+1);
            puts(List[i].name);
            printf("\nMa sinh vien thu %d: ",i+1);
            puts(List[i].rollno);
            printf("\nTuoi sinh vien thu %d: %d",i+1,List[i].age);
            printf("\n");
        }
    }
    return 0;
}
