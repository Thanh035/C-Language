#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

typedef struct student_st
{
    char name[30],province[30];
    int year;
} studentlst;

void showmenu()
{
        printf("\n1.Nhap du lieu cua tung sinh vien.");
        printf("\n2.Sap xep va hien thi thong tin chi tiet cua tung sinh vien theo thu tu tang dan cua ho ten.");
        printf("\n3.Tim sinh vien co tuoi nho nhat.");
        printf("\n4.Tim sinh vien theo tinh.");
        printf("\n5.Luu thong tin voa file student.txt.");
        printf("\n6.Thoat!!!");
}

void InputStudent(studentlst *studentList)
{
        for(int i=0;i<3;i++)
        {
            printf("\nSinh vien %d",i+1);
            printf("\nTen cua sinh vien: ");
            fflush(stdin);fflush(stdout);
            gets(studentList[i].name);
            printf("Tinh: ");
            fflush(stdin);fflush(stdout);
            gets(studentList[i].province);
            printf("Nam sinh: ");
            fflush(stdin);fflush(stdout);
            scanf("%d",&studentList[i].year);
            printf("\n");
        }    
}

void Sort(studentlst *p)
{
    for(int i=0;i<2;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            if(strcmp(p[i].name,p[j].name) < 0)
            {
                int tmp =i;
                i=j;
                j=tmp;
            }
        }
    }

    for(int i=0;i<3;i++)
    {
        printf("\nSinh vien: %d",i+1);
        printf("\nHo ten: %s",p[i].name);
        printf("\nTinh thanh: %s",p[i].province);
        printf("\nNam sinh: %d",p[i].year);
    }
}

void Minold(studentlst *studentList)
{
        int max;
        max = studentList[0].year;
        for(int i=0;i<3;i++)
        {
            if(studentList[i].year > max)
            {
                max = studentList[i].year;
            }
        }

        printf("\nSinh vien co tuoi nho nhat la: ");
        for(int i=0;i<3;i++)
        {
            if(max == studentList[i].year)
            {
               printf("\nSinh vien: %d",i+1);
               printf("\nHo ten: %s",studentList[i].name);
               printf("\nTinh thanh: %s",studentList[i].province);
               printf("\nNam sinh: %d",studentList[i].year);
            }
        }
}

void Search(studentlst *studentList)
{
     printf("Nhap tinh: ");
        char find[50];
        fflush(stdin);fflush(stdout);
        gets(find);
        int count;
        count = 0;
        for(int i=0;i<3;i++)
        {
            if(strcmp(studentList[i].province,find) == 0)
            {
                count++;
                printf("\nSinh vien: %d",i+1);
               printf("\nHo ten: %s",studentList[i].name);
               printf("\nTinh thanh: %s",studentList[i].province);
               printf("\nNam sinh: %d",studentList[i].year);
            }
            printf("\n");
        }
        if(count== 0)
        {
            printf("\nKhong co sinh vien thuoc tinh nay");
        }
}

void SaveFile(studentlst *studentList)
{
    printf("\nError!!!");
}

int main(int argc, char const *argv[])
{
    studentlst studentList[3];
    int choose;

    do{
        showmenu();
        printf("\nLua chon: ");
        scanf("%d",&choose);

        switch (choose)
        {
        case 1:
        InputStudent(studentList);
            break;
        
        case 2:
        Sort(studentList);
            break;

        case 3:
        Minold(studentList);
            break;

        case 4:
        Search(studentList);
            break;

        case 5:
        SaveFile(studentList);
            break;

        case 6:
        printf("\nThoat chuong trinh!");
        break;
        default:
        printf("\nMoi ban nhap lai =)))");
            break;
        }
    }while(choose != 6);

    return 0;
}



