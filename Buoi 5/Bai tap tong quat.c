#include<stdio.h>

int LookUp(int value,int List[],int x)
{
    int count=0;
    for(int i=0;i<x;i++)
    {
        if(value == List[i])
        {
            count++;
        }
    }
    return count;
}

int main()
{   int choose,x,  tmpIndex;
    int List[100];
      int tmp[100];
    do{
    printf("\n1.Nhap vao so nguyen x=> them vao mang DataList\n");
    printf("2.Sap xep theo thu tu tang dan\n");
    printf("3.Tim kiem phan tu trong mang\n");
    printf("4.Xoa phan tu trong mang\n");
    printf("5.Hien thi\n");
    printf("6.Thoat\n");
    
    printf("Chon: ");scanf("%d",&choose);
    
    switch(choose)
    {
        case 1:
        printf("\nNhap x: ");
        scanf("%d",&x);
        printf("Nhap mang:");
        for(int i=0;i<x;i++)  
        {
            scanf("%d",&List[i]);
        }
        break;
        
        case 2:
        for(int i=0;i<x-1;i++)
        {
            for(int j=i+1;j<x;j++)
            {
                if(List[i] > List[j])
                {
                    int tmp = List[i];
                    List[i] = List[j];
                    List[j] = tmp;
                }
            }
        }
        break;

        case 3:
        int Find;
        printf("\nNhap so can tim: ");
        scanf("%d",&Find);
        printf("So phan tu tim duoc trong mang la: %d",LookUp(Find,List,x));
        break;

        case 4:
        int num;    //Nhap phan tu can xoa
        printf("\nNhap so can xoa: ");
        scanf("%d",&num);

         int tmp[100];      //Tao mang ko chua num
         tmpIndex = -1;
        for(int i=0;i<x;i++)
        {
            if(List[i] != num)
            {         
                tmp[++tmpIndex] = List[i];
            }
        }
        x = tmpIndex+1;
        for(int i=0;i<x;i++)
        {
            List[i] = tmp[i];
        }
        break;

        case 5:
        printf("\nHien thi danh sach phan tu:");
        for(int i=0;i<x;i++)
        {
            printf("%d ",List[i]);
        }
        break;

        case 6:
        printf("\nThoat!");
        break;

        default:
        printf("\nMoi ban nhap lai!");
    }
    }while(choose != 6);
}