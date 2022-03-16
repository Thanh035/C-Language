#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int *p,*pEven;
	int choose,Ideven;
	int n =0;
	do
	{
		printf("\n1.Nhap vao n so nguyen.\n");
		printf("2.Hien thi danh sach cac phan tu trong mang *p.\n");
		printf("3.Hien thi danh sach cac phan tu trong mang *pEven.\n");
		printf("4.Thoat!\n");
		printf("Chon: ");
		scanf("%d",&choose);
		
		switch(choose)
		{
			case 1:
			//nhap so phan tu vao mang
			int total;
			printf("\nSo phan tu can them: ");
			scanf("%d",&total);	
			// Nhap mang
			total = n;
			if(total==0)
			{
				p = (int *) calloc(n,sizeof(int));
				for(int i=0;i<n;i++)
				{
					printf("Nhap phan tu %d:",i);
					scanf("%d",(p+i));
				}
			}
			else
			{
				p = (int *) realloc(p,n*sizeof(int));
				for(int i=n;i<total+n;i++)
				{
					printf("Nhap phan tu %d:",i);
					scanf("%d",(p+i));
				}
			}
			n +=total;
			//Thuc hien sap xep
			for(int i=0;i<n-1;i++)
			{
				for(int j=i+1;j<n;j++)
				{
					if(*(p+i) > *(p+j))
					{
						int tmp = *(p+i);
						*(p+i) 	= *(p+j);
						*(p+j)	= tmp;
					}
				}
			}
			
			break;
			
			case 2:
			printf("\nHien thi danh sach cac phan tu trong mang *p: ");
			for(int i=0;i<n;i++)
			{
				printf("%d ",*(p+i));
			}
			break;
			
			case 3:
			Ideven = 0;
			pEven = (int *) malloc(n*sizeof(int));
			for(int i=0;i<n;i++)
			{
				if(*(p+i) % 2 ==0)
				{
					*(pEven+Ideven) = i;
					Ideven++; 
				}
			}
			printf("\nHien thi danh sach mang *pEven: ");
			for(int i=0;i<Ideven;i++)
			{
				printf("%d ",*(pEven+i));
			}
			break;
		
			case 4:
			printf("\nThoat!");
			break;

			default:
			printf("Moi ban nhap lai!!");			
		}
	}while(choose != 4);
	return 0;
}





