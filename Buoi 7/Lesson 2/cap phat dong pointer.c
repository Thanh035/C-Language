#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int n,choose,sum;
    int *t;
    int total =0;

    do{
        printf("\n1.Nhap vao N so nguyen\n");
        printf("2.Hien thi danh sach cac phan tu trong mang\n");
        printf("3.Tinh tong cac phan tu trong mang\n");
        printf("4.Sap xep cac phan tu trong mang theo thu tu tang dan\n");
        printf("5.Thoat\n");
        printf("Chon: ");scanf("%d",&choose);

        switch(choose)
        {
            case 1:          
            printf("\nSo phan tu can them vao mang t: ");
            scanf("%d",&n);
            if(total == 0)
            {
                t = (int *) calloc(n,sizeof(int));
            }
            else
            {
                t=(int *) realloc(t,(total+n)*sizeof(int));
            }

                for(int i=total;i<total+n;i++)
            {  
                printf("nhap phan tu %d: ",i);
                scanf("%d",(t+i));
            }
            total+=n;
            break;

            case 2:
            printf("\nCac phan tu co trong mang: ");
            for(int i=0;i<total;i++)
            {
                printf("%d ",*(t+i));
            }
            break;

            case 3:
            sum=0;
            for(int i=0;i<total;i++)
            {
                sum+=*(t+i);
            }
            printf("\nTong cac phan tu trong mang: %d",sum);
            break;

            case 4:
            for(int i=0;i<total-1;i++)
            {
                for(int j=i+1;j<total;j++)
                {
                    if(*(t+i) > *(t+j))
                    {
                        int tmp = *(t+i);
                        *(t+i)  = *(t+j);
                        *(t+j)  = tmp;   
                    }
                }
            }

            case 5:
            printf("\nThoat !");
            break;

            default:
            printf("\nMoi ban nhap lai :))))");
        }
    }while(choose != 5);
    return 0;
}