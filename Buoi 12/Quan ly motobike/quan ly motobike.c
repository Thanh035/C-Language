#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
typedef struct motorbike_st
{
    char name[20];
    char manufacturer[10];
    char madein[12];
    long int price;
} motorbike;

void showMenu();
void InputData(motorbike *p);
void Sort(motorbike *p);
void Display(motorbike *p);
void ManufacturerForSearch(motorbike *p);
void SaveFiletxt(motorbike *p);

int main(int argc, char const *argv[])
{
    motorbike motorbikeList[3];
    int choose;
    do{
        showMenu();
        scanf("%d",&choose);

        switch (choose)
        {
        case 1:
            InputData(motorbikeList);
            break;
        
        case 2:
            Sort(motorbikeList);
            Display(motorbikeList);
            break;

        case 3:
            ManufacturerForSearch(motorbikeList);
            break;

        case 4:
            SaveFiletxt(motorbikeList);
            break;

        case 5:
            printf("\nThe program end!");
            break;
        default:
        printf("\nError!");
            break;
        }
    }while(choose != 5);
    return 0;
}

void showMenu()
{
    printf("\n1. Input data of motorbike");
    printf("\n2. Sort display details information and statistic of all motorbikes");
    printf("\n3/ Find the motorbike of manufacturer");
    printf("\n4. Save the test file motorbike");
    printf("\n5. Exit!");
    printf("\nChoose: ");
}

void InputData(motorbike *p)
{
    for(int i=0;i<3;i++)
    {
        printf("\nEnter data of mortorbike %d: ",i+1);
        printf("\nName: ");
        fflush(stdin);fflush(stdout);
        gets(p[i].name);
        printf("Manufacturer: ");
        fflush(stdin);fflush(stdout);
        gets(p[i].manufacturer);
        printf("Made in: ");
        fflush(stdin);fflush(stdout);
        gets(p[i].madein);
        printf("Price: ");
        fflush(stdin);fflush(stdout);
        scanf("%ld",&p[i].price);
    }
}

void Sort(motorbike *p)
{
    for(int i=0;i<2;i++)
    {
        for(int j=i+1;j<3;j++)
        {
           if(strcmp(p[i].manufacturer,p[j].manufacturer) < 0)
           {
               motorbike temp = p[i];
               p[i]           = p[j];
               p[j]           = temp;
           }
        }
    }
}

void Display(motorbike *p)
{
    printf("\n%-3s||%-20s||%-15s||%-10s||%-10s||", "No" , "Name" , "Manafacturer" , "Made In" , "Price");

    for(int z=0;z<3;z++)
    {
        printf("\n%0.3d||%-20s||%-15s||%-10s||%-10ld||", z+1 , p[z].name , p[z].manufacturer , p[z].madein , p[z].price);
    }
    printf("\n");

    int count[3] = {1,1,1};
    int j,i;
    for(i=0;i<2;i++)
    {
        if(count[i] == 0)
        {
            continue;
        }
        for(j=i+1;j<3;j++)
        {
            if(count[j] == 0)
            {
                continue;
            }
        }

        int cmp = strcmp( p[i].manufacturer , p[j].manufacturer);
        if(cmp == 0)
        {
            count[i]++;
            count[j]--;
        }
    }

    for(int i=0;i<3;i++)
    {
        if(count[i] > 0)
        {
            printf("\n%s has %d motorbike",p[i].manufacturer,count[i]);
        }
    }
}

void ManufacturerForSearch(motorbike *p)
{
    printf("\nEnter manufacturer for search: ");
    char find[30];
    fflush(stdin);fflush(stdout);
    gets(find);
    int count = 0;
    int cmp;

    for(int i=0;i<3;i++)
    {
        cmp = strcmp(p[i].manufacturer,find);
        if(cmp == 0)
        {
            count++;
        }
    }

    if(count > 0)
    {
        printf("\n%-3s||%-20s||%-15s||%-10s||%-10s||", "No" , "Name" , "Manafacturer" , "Made In" , "Price");
    }
    else
    {
        printf("\nThere are no motorbike of this manufacturer");
    }
    for(int i=0;i<3;i++)
    {
        cmp = strcmp(find,p[i].manufacturer);
        if(cmp == 0)
        {
            printf("\n%0.3d||%-20s||%-15s||%-10s||%-10ld||", i+1 , p[i].name , p[i].manufacturer , p[i].madein , p[i].price);
        }
    }
}

void SaveFiletxt(motorbike *p)
{
    FILE *fp;
    fp = fopen("motorbike.txt","w");

    if(fp == NULL)
    {
        printf("\nError!");
    }
    else
    {
        fprintf(fp , "\n||%-20s||%-15s||" ,  "Name" , "Manafacturer" );
        for(int i=0;i<3;i++)
        {
             fprintf(fp , "\n||%-20s||%-15s||",  p[i].name , p[i].manufacturer);
        }
    }
    printf("\nSave successly!");
    fclose(fp);
}