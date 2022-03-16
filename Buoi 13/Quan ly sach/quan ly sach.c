#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
typedef struct book_st
{
    char ten[30];
    char theloai[30];
    int giatien;
    int namxuatban;
} Book;

void showMenu();
void InputData(Book *p);
void Sort(Book *p);
void Display(Book *p);
void Report(Book *p);
void typeBySearch(Book *p);
void SaveFile(Book *p);

int main(int argc, char const *argv[])
{
    Book bookList[3];
    int choose;

    do
    {
        showMenu();
        scanf("%d",&choose);

        switch (choose)
        {
        case 1:
            InputData(bookList);
            break;

        case 2:
            Sort(bookList);
            Display(bookList);
            Report(bookList);
            break;

        case 3:
            typeBySearch(bookList);
            break;

        case 4:
            SaveFile(bookList);
            printf("\nLuu file thanh cong");
            break;

        case 5:
        printf("\nThoat chuong trinh!");
            break;
        
        default:
        printf("\nNhap sai!!!");
            break;
        }
    } while (choose != 5);
    
    return 0;
}

void showMenu()
{
    printf("\n1. Nhap du lieu cua tung quyen sach.");
    printf("\n2. Sap xep,hien thi thong tin chi tiet cua tung quyen sach theo the loai (Z->A).\n");
    printf("Thong ke sach theo nam xuat ban.");
    printf("\n3. Tim quyen sach theo the loai.");
    printf("\n4. Ghi vao tap nhi phan book.dat.");
    printf("\n5. Thoat!");
    printf("\n Chon: ");
}

void InputData(Book *p)
{
    for(int i=0;i<3;i++)
    {
        printf("\nNhap quyen sach %d: ",i+1);fflush(stdin);fflush(stdout);
        printf("\nTen: ");fflush(stdin);fflush(stdout);
        gets(p[i].ten);
        printf("The loai: ");fflush(stdin);fflush(stdout);
        gets(p[i].theloai);
        printf("Gia tien: ");fflush(stdin);fflush(stdout);
        scanf("%d",&p[i].giatien);
        printf("Nam xuat ban: ");fflush(stdin);fflush(stdout);
        scanf("%d",&p[i].namxuatban);
    }
}

void Sort(Book *p)
{
    for(int i=0;i<2;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            int cmp = strcmp(p[i].theloai,p[j].theloai);
            if(cmp < 0)
            {
                Book temp = p[i];
                p[i]      = p[j];
                p[j]      = temp;
            }
        }
    }
}

void Display(Book *p)
{
    printf("\n%s||%-20s||%-15s||%-10s||%-10s" , "STT","Ten","The loai","Gia tien","Nam xuat ban");
    for(int i=0;i<3;i++)
    {
        printf("\n%0.3d||%-20s||%-15s||%-10d||%-10d" , i+1,p[i].ten,p[i].theloai,p[i].giatien,p[i].namxuatban);
    }
}

void Report(Book *p)
{
    int count[3];
    for(int i=0;i<3;i++)
    {
        count[i] = 1;
    }

    for(int i=0;i<2;i++)
    {
        if(count[i] == 0)
        {
            continue;
        }

        for(int j=i+1;j<3;j++)
        {
            if(count[j] == 0)
            {
                continue;
            }

            if(p[i].namxuatban == p[j].namxuatban)
            {
                count[i]++;
                count[j]--;
            }
        }
    }

    printf("\nHien thi thong ke so quyen sach theo nam xuat ban nhu duoi day: ");
    for(int i=0;i<3;i++)
    {
        if(count[i] > 0)
        printf("\n\tNam %d co %d quyen sach",p[i].namxuatban,count[i]);
    }
}

void typeBySearch(Book *p)
{
    int count = 0;
    char type[10];

    printf("\nNhap the loai: ");
    fflush(stdin);fflush(stdout);
    gets(type);

    for(int i=0;i<3;i++)
    {
        int cmp = strcmp(p[i].theloai,type);
        if(cmp != 0)
        {
            continue;

        }
        if(count == 0)
        {
            printf("\n%s||%-20s||%-15s||%-10s||%-10s" , "STT","Ten","The loai","Gia tien","Nam xuat ban");
        }
        if(cmp == 0)
        {
            printf("\n%0.3d||%-20s||%-15s||%-10d||%-10d" , i+1,p[i].ten,p[i].theloai,p[i].giatien,p[i].namxuatban);
            count++;
        }
    }

    if(count == 0)
    {
        printf("\nKhong co quyen sach nao thuoc loai nay");
    }
}

void SaveFile(Book *p)
{
    FILE *fp;
    fp = fopen("book.dat","wb");

    if(fp == NULL)
    {
        printf("\nError!!!");
    }
    else
    {
        fwrite(p,sizeof(Book),3,fp);
    }

    fclose(fp);
}