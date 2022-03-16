#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
typedef struct tranhtheu
{
    char ten[30];
    int chieudai;
    int chieurong;
    char tacgia[30];
    int giaban;
} gallery;

void showMenu();
void InputData(gallery *p);
void Display(gallery *p);
void Sort(gallery *p);
void Report(gallery *p);
void CostForSearch(gallery *p);
void SaveFile(gallery *p);

int main(int argc, char const *argv[])
{
    gallery dsTranh[3];
    int choose;

    do{
        showMenu();
        printf("\nLua chon: ");scanf("%d",&choose);
        
        switch (choose)
        {
        case 1:
            InputData(dsTranh);
            break;
        
        case 2:
            Sort(dsTranh);
            Display(dsTranh);
            Report(dsTranh);
            break;

        case 3:
            CostForSearch(dsTranh);
            break;

        case 4:
            SaveFile(dsTranh);
            printf("\nFile created and saved successfullly");
            break;

        case 5:
            printf("\nThoat chuong trinh!");
            break;
        default:
            printf("\nError!!!!!!");
            break;
        }

    }while(choose != 5);

    return 0;
}

void showMenu()
{
    printf("\n1. Nhap danh sach cac buc tranh");
    printf("\n2. Sap xep, thong ke va hien thi thong tin chi tiet cua tung buc tranh theo dien tich giam dan");
    printf("\n3. Tim buc tranh co theo gia ban");
    printf("\n4. Ghi vao tap nhi phan tranhtheo.dat");
    printf("\n5. Thoat");
}

void InputData(gallery *p)
{
    for(int i=0;i<3;i++)
    {
        printf("\nNhap thong tin cho buc tranh so %d: ",i+1);
        printf("\nTen: ");
        fflush(stdin);fflush(stdout);
        gets(p[i].ten);
        printf("Tac gia: ");
        fflush(stdin);fflush(stdout);
        gets(p[i].tacgia);
        printf("Chieu dai: ");
        fflush(stdin);fflush(stdout);
        scanf("%d",&p[i].chieudai);
        printf("Chieu rong: ");
        fflush(stdin);fflush(stdout);
        scanf("%d",&p[i].chieurong);
        printf("Gia ban (USD): ");
        fflush(stdin);fflush(stdout);
        scanf("%d",&p[i].giaban);
    }
}

long long int acreage(int cd,int cr)
{
     long long int dientich;
     return dientich = cd*cr;
}

void Sort(gallery *p)
{
    for(int i=0;i<2;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            if( acreage(p[i].chieudai,p[i].chieurong) < acreage(p[j].chieudai,p[j].chieurong) )
            {
                gallery temp = p[i];
                p[i]         = p[j];
                p[j]         = temp;
            }
        }
    }
}

void Support()
{
    printf("\n");
    for(int i=0;i<90;i++)
    {
        printf("=");
    }
}

void Display(gallery *p)
{   
    char size[30];
    Support();
    printf("\nDanh sach tranh");
    Support();
    printf("\n%s||%-30s||%-20s||%-5s||%-5s||%-5s||%-10s", "STT" , "Ten" , "Tac gia" , "Dai" , "Rong" , "Gia" , "Kho");
    for(int i=0;i<3;i++)
    {
        int dt = acreage(p[i].chieudai,p[i].chieurong);
        if(dt >= 2000 && dt < 10000) 
        {
           strcpy(size,"Trung binh");
        }
        else if( dt >= 10000 )
        {
            strcpy(size,"Lon");
        }
        else 
        {
            strcpy(size,"Nho");
        }

        printf("\n%0.3d||%-30s||%-20s||%-5d||%-5d||%-5d||%-10s", i+1,p[i].ten,p[i].tacgia,p[i].chieudai,p[i].chieurong,p[i].giaban,size);
    }
    Support();
}

void Report(gallery *p)
{
    printf("\n\nThong ke:");
    
    int count = 0;
    for(int i=0;i<3;i++)
    {
        if( acreage(p[i].chieudai,p[i].chieurong) >= 2000 && acreage(p[i].chieudai,p[i].chieurong) < 10000)
        {
           count++;
        }
    }
    if(count != 0)
    {
        printf("\n+ Kho trung binh co %d buc tranh",count);
    }

    count=0;
    for(int i=0;i<3;i++)
    {
        if( acreage(p[i].chieudai,p[i].chieurong) >= 10000 )
        {
           count++;
        }
    }
    if(count != 0)
    {
        printf("\n+ Kho lon co %d buc tranh",count);
    }

    count=0;
    for(int i=0;i<3;i++)
    {
        if( acreage(p[i].chieudai,p[i].chieurong) < 2000 )
        {
           count++;
        }
    }
    if(count != 0)
    {
        printf("\n+ Kho nho co %d buc tranh",count);
    }
}

void CostForSearch(gallery *p)
{
    int cost;
    printf("\nNhap gia ban toi da: ");
    scanf("%d",&cost);
    fflush(stdin);fflush(stdout);

    int count=0;
    for(int i=0;i<3;i++)
    {
        if(p[i].giaban <= cost)
        {
            count ++;
        }
    }

    if(count != 0)
    {
        char size[30];
        printf("\nDanh sach tranh");
        Support();
        printf("\n%s||%-30s||%-20s||%-5s||%-5s||%-5s||%-10s", "STT" , "Ten" , "Tac gia" , "Dai" , "Rong" , "Gia" , "Kho");
        for(int i=0;i<3;i++)
        {
            if(p[i].giaban <= cost)
            {
                int dt = acreage(p[i].chieudai,p[i].chieurong);
                if(dt >= 2000 && dt < 10000) 
                {
                strcpy(size,"Trung binh");
                }
                else if( dt >= 10000 )
                {
                    strcpy(size,"Lon");
                }
                else 
                {
                    strcpy(size,"Nho");
                }

                printf("\n%0.3d||%-30s||%-20s||%-5d||%-5d||%-5d||%-10s", i+1,p[i].ten,p[i].tacgia,p[i].chieudai,p[i].chieurong,p[i].giaban,size);
            }
        }
        Support();
    }
    else
    {
        printf("\nKhong co buc tranh nao ban voi gia nhu vay");
    }
}
void SaveFile(gallery *p)
{
    FILE *fp;
    fp = fopen("tranhtheu.dat","wb");
    
    if(fp == NULL)
    {
        printf("\nError!!!");
    }
    else
    {   
         fwrite(p,sizeof(gallery),3,fp);
    }
    fclose(fp);
}