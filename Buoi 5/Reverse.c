#include<stdio.h>
#include<string.h>

int main()
{
    char string [200];
    printf("Nhap chuoi: ");
    gets(string);

    int n=strlen(string);
    char string2[100];
    int i=0;
        for(int j=n-1;j>=0;j--)
        {
            string2[i] = string[j];
            i++;
        }
    

    printf("hien thi voi chuoi nguoc lai: ");
    puts(string2);    
}