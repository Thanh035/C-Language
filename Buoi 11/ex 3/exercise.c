#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
typedef struct Cinema
{
    char Name[25];
    char Address[35];
    int Seats;
} List;

void showMenu();
void InputData(List *p);
void Display(List *p);
void Support();
void Sort(List *p);
void SearchforSeats(List *p);
void SaveFile(List *p);
void ReadFile(List *p);

int main(int argc, char const *argv[])
{
    List cinemaList[4];
    int choose;
    do{
        showMenu();
        printf("\nLua chon: ");
        scanf("%d",&choose);

        switch (choose)
        {
        case 1:
            InputData(cinemaList);
            break;
        
        case 2:
            Sort(cinemaList);
            Display(cinemaList);
            break;

        case 3:
            SearchforSeats(cinemaList);
            break;  

        case 4:
            SaveFile(cinemaList);
            printf("\nSave successly!");
            break;  

        case 5:
            ReadFile(cinemaList);
            printf("\nRead successly!");
            break;

        case 6:
            printf("\nChuong trinh ket thuc!");
            break;  

        default:
        printf("\nMoi ban nhap lai!!!");
            break;
        }
    }while(choose != 6);
    return 0;
}

void showMenu()
{
    printf("\n1. Nhap du lieu quan ly danh sach rap chieu phim.");
    printf("\n2. Hien thi danh sach ra man hinh.");
    printf("\n3. Tim rap theo so ghe.");
    printf("\n4. Luu du lieu ra tep cinema.dat.");
    printf("\n5. Doc du lieu tu tep cinema.dat.");
    printf("\n6. Thoat.");
}

void InputData(List *p)
{
    for(int i=0;i<4;i++)
    {
        printf("\nNhap ten rap chieu phim thu %d:",i+1);
        fflush(stdin);fflush(stdout);
        gets(p[i].Name);
        printf("Nhap dia chi rap: ");
        fflush(stdin);fflush(stdout);
        gets(p[i].Address);
        printf("Nhap so luong ghe: ");
        fflush(stdin);fflush(stdout);
        scanf("%d",&p[i].Seats);
    }
}

void Support()
{
     printf("\n");
    for(int i=0;i<69;i++)
    {
        printf("-");
    }
    printf("\n");
}

void Sort(List *p)
{
    for(int i=0;i<3;i++)
    {
        for(int j=i+1;j<4;j++)
        {
            if(strcmp(p[i].Name,p[j].Name) > 0)
            {
                List temp = p[i];
                p[i]      = p[j];
                p[j]      = temp;
            }
        }
    }
}

void Display(List *p)
{
    Support();
    printf("|%-20s|%-30s|%-15s|","Name","Address","Seats");
    Support();
    for(int i=0;i<4;i++)
    {    
        printf("|%-20s|%-30s|%-15d|",p[i].Name,p[i].Address,p[i].Seats);
        Support();
    }
}

void SearchforSeats(List *p)
{
    printf("\nNhap so ghe toi thieu: ");
    int find;
    scanf("%d",&find);
    
    Support();
    printf("|%-20s|%-30s|%-15s|","Name","Address","Seats");
    Support();
    for(int i=0;i<4;i++)
    {    
        if(p[i].Seats >= find)
        {
            printf("|%-20s|%-30s|%-15d|",p[i].Name,p[i].Address,p[i].Seats);
            Support();
        }
    }
}

void SaveFile(List *p)
{
    FILE *fp;
    fp = fopen("student.dat","wb");

    if(fp == NULL)
    {
        printf("\nError!!");
    }
    else
    {
        fwrite(p,sizeof(List),3,fp);
    }
    fclose(fp);
}

void ReadFile(List *p)
{
    FILE *fp;
    fp = fopen("student.dat","rb");

    if(fp == NULL)
    {
        printf("\nError!!!");
    }
    else
    {
        fread(p,sizeof(List),4,fp);
    }

    fclose(fp);
}