#include<stdio.h>
#include<string.h>
int main()
{	
	int choose,age;
	char name[100],address[100],email[100],sex[10],phone[15];
	do
	{
		printf("\nMenu chuong trinh :\n");
		printf("1.Nhap thong tin sinh vien.\n");
		printf("2.Hien thi thong tin sinh vien.\n");
		printf("3.Ket thuc chuong trinh.\n");
		printf("Nguoi dung lua chon: ");scanf("%d",&choose);
		switch (choose)
		{
			case 1:
				printf("\nNhap thong tin sinh vien");
				printf("\nTen: ");
				fflush(stdin);fflush(stdout);
				gets(name);
				fflush(stdin);fflush(stdout);
				printf("Tuoi: ");
				fflush(stdin);fflush(stdout);
				scanf("%d",&age);
				printf("Dia chi: ");
				fflush(stdin);fflush(stdout);
				gets(address);
				printf("Email: ");
				fflush(stdin);fflush(stdout);
				gets(email);
				printf("Gioi tinh: ");
				fflush(stdin);fflush(stdout);
				gets(sex);
				printf("SDT: ");
				fflush(stdin);fflush(stdout);
				gets(phone);
				break;
			case 2:
				
				printf("\nTen: %s",name);
				printf("\nTuoi: %d\n",age);
				printf("Dia chi: ");puts(address);
				printf("Email: ");puts(email);
				printf("Gioi tinh: ");puts(sex);
				printf("SDT: ");puts(phone);
				break;
		}
	}while(choose != 3);
	return 0;
}
