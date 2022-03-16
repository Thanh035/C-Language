#include<stdio.h>
#include<math.h>
int main()
{
	//Nhap phan tu n
	int n;
	printf("Nhap n phan tu: ");scanf("%d",&n);
	int arr[n];
	//Nhap cac phan tu
	printf("\n---------Nhap phan tu vao mang----------\n");
	for(int i = 0;i<n;i++)
	{
		printf("Nhap phan tu %d: ",i);
		scanf("%d",&arr[i]);
	}
	//In cac ohan tu
	printf("\n--------In mang---------\n");
	for(int i=0;i<n;i++)
	{
		printf("Phan tu %d = %d\n",i,arr[i]);
	}
	//Tinh tong cac phan tu mang
	int Sum=0;
	for(int i=0;i<n;i++)
	{
		Sum+=arr[i];	
	}
	printf("\nTong cac phan tu trong mang = %d",Sum);	
	return 0;
}
