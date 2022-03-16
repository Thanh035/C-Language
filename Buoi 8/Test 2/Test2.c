#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
 /**   
    char N[100],M[100];
    printf("Nhap so nguyen N: ");
    fflush(stdin);fflush(stdout);
    gets(N);
    printf("Nhap so nguyen M: ");
    fflush(stdin);fflush(stdout);
    gets(M);

    int n=strlen(N);
    int m=strlen(M);
    for(int i=0;i<n;i++)
    {
        N[i]-='0';
    }
    for(int j=0;j<m;j++)
    {
        M[j] -='0';
    }

    int *p;
    int t;
    if(n>m)
    {
         t=n+1;
        p=(int *) calloc(t,sizeof(int));
    }
    else
    {
         t=m+1;
        p=(int *) calloc(t,sizeof(int));
    }
    
    int index = t-1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int tmp = N[i] + N[j];
            if(tmp > 9)
            {
                p[index++] = tmp%10;
            }
            else
            {
                p[index++] = tmp;
            }
        }
        
    }

    printf("\nResult: ");
    for(int i=0;i<t;i++)
    {
        printf("%s",*p+i);
    }

**/
    printf("\n\nBai 2\n");
    char str1[100],str2[100];
    printf("Nhap chuoi s1: ");
    fflush(stdin);fflush(stdout);
    gets(str1);
    printf("Nhap chuoi s2: ");
    fflush(stdin);fflush(stdout);
    gets(str2);

    int count = 0;
    int i=0;
    int j=0;
    
    for(i;i<strlen(str1);i++)
    {
        if(str2[j] == str1[i])
        {
            j++;
        }
        else
        {
            j=0;
        }
        if(j == strlen(str2)-1 )
        {
            count ++;
            j=0;
        }
    }    
    printf("So lan xuat hien chuoi s2 trong s1 la: %d",count);
    return 0;
    
}






