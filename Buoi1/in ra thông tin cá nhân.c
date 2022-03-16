#include <stdio.h>
#include <stdlib.h>
#define MAX 100

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char name[MAX] = "Phung Quang Thanh";
	int age = 18;
	char address[MAX] = "Soc Son,Ha Noi";
	char email[MAX] = "phungquangthanh035@gmail.com";
	char phone[MAX] = "0364504982";
	
	printf("Ten:%s",name);
	printf("\nTuoi:%d",age);
	printf("\nDia chi:%s",address);
	printf("\nEmail:%s",email);
	printf("\nSDT:%s",phone);
	
	return 0;
}
