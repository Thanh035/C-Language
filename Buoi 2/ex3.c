#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char rollno[16];
	int age;
	char name[50];
	char address[200];
	
	printf("Rollno: ");gets(rollno);
	printf("Age: ");scanf("%d",&age);
	fflush(stdin);fflush(stdout); //bo kí tu '\n' 
	printf("Name: ");gets(name);
	
	fflush(stdin);fflush(stdout);
	printf("Address: ");gets(address);
	
	printf("\n=========================================\n");
	printf("|Ten               |Tuoi |Ma SV |Dia Chi|",name,age,rollno,address);
	printf("\n=========================================\n");
	printf("|%s      |%d   |%s  |%s |",name,age,rollno,address);
	printf("\n=========================================\n");
	return 0;
}
