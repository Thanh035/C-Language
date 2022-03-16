#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    printf("Bai 1:\n");
    char string[100];
    printf("Nhap chuoi: ");
    fflush(stdin);fflush(stdout);
    gets(string);
    printf("Do dai cua chuoi do la: %d",strlen(string));

    printf("\n\nBai 2:\n");
    char s1[50],s2[50];
    printf("Chuoi s1: ");
    fflush(stdin);fflush(stdout);
    gets(s1);
    printf("Chuoi s2: ");
    fflush(stdin);fflush(stdout);
    gets(s2);
    int length=strlen(s1) + strlen(s2);
    int index=0;
    for(int i=strlen(s1);i<length;i++)
    {
        s1[i] = s2[index];
        index++;
    }
    printf("Do dai chuoi %s la: %d",s1,length);

    printf("\n\nBai 3:\n");
    char str[100];
    printf("Nhap vao chuoi str: ");
    fflush(stdin);fflush(stdout);
    gets(str);
    printf("Ket qua in: ");
    for(int i=0;i<strlen(str);i++)
    {
        printf("\n%c",str[i]);
    }
    return 0;
}
