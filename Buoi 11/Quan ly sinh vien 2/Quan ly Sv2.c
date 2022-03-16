#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
typedef struct student_st
{
    char fullname[30];
    char rollNo[10];
    int year;
    float mark; 
} Student;

void ShowMenu();
void InputData(Student *studentList);
void Sort(Student *p);
void Display(Student *p);
void Report(Student *p);
void YearforSearch(Student *p);
void savefile(Student *p);

int main(int argc, char const *argv[])
{   
    int choose;
    do{
        Student studentList[3];
        ShowMenu();
        printf("\nChoose: ");
        scanf("%d",&choose);

        switch (choose)
        {
        case 1:
            InputData(studentList);
            break;

        case 2:
            Sort(studentList);
            Display(studentList);
            Report(studentList);
            break;

        case 3:
            YearforSearch(studentList);
            break;

        case 4:
            savefile(studentList);
			printf("\nFile created and saved successfully!!");
            break;

        case 5:
            printf("\nExit!");
            break;

        default:
            printf("\nError!!!");
            break;
        }
    }while(choose != 5);
    return 0;
}

void ShowMenu()
{
    printf("\n1. Input data of students.");
    printf("\n2. Sort, display details information and statistic of all students.");
    printf("\n3. Find the student have year of birth .");
    printf("\n4. Save to binary file studen.dat");
    printf("\n5. Exit");
}

void InputData(Student *studentList)
{
     for(int i=0;i<3;i++)
        {
            printf("\nEnter data of student %d: ",i+1);
            printf("\nFull name: ");
            fflush(stdin);fflush(stdout);
            gets(studentList[i].fullname);
            printf("Roll name: ");
            fflush(stdin);fflush(stdout);
            gets(studentList[i].rollNo);
            printf("Year of birth: ");
            fflush(stdin);fflush(stdout);
            scanf("%d",&studentList[i].year);
            printf("Mark (/10): ");
            scanf("%f",&studentList[i].mark);
        }
}

void Sort(Student *p)
{
    for(int i=0;i<2;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            if(p[i].mark < p[j].mark)
            {
                Student temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
}

void Display(Student *p)
{   
    printf("\n%-3s||%-20s||%-11s||%-5s||%-5s||%-14s||","No","Name","Roll Number","Year","Mark","Status");
    char status[30];

    for(int i=0;i<3;i++)
    {
        if(p[i].mark >= 7.5)
        {
            strcpy(status,"DISTINCTION");        
        }
        else if(p[i].mark >= 6)
        {
           strcpy(status,"CREDIT");   
        }
        else if(p[i].mark >= 4)
        {
           strcpy(status,"PASS");
        }
        else
        {
            strcpy(status,"FAIL");
        }
        printf("\n00%d||%-20s||%-11s||%-5d||%-5.2f||%-14s||",i+1,p[i].fullname,p[i].rollNo,p[i].year,p[i].mark,status);
    }  
}

void Report(student_st *p)
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

            if(p[i].year == p[j].year)
            {
                count[i]++;
                count[j]--;
            }
        }
    } 
    
    for(int i=0;i<3;i++)
    {
        if(count[i] > 0)
        {
            printf("\nNam sinh %d gom %d hoc sinh",p[i].year,count[i]);
        }
    }
}

void YearforSearch(Student *p)
{
    int find;
    printf("\nEnter year for search: ");
    scanf("%d",&find);

    int count=0;
    for(int i=0;i<3;i++)
    {
        count++;
    }
    if(count == 0)
    {
       printf("\nThere are no student have this year of birth");
    }
    else
    {
        printf("\n%-3s||%-20s||%-11s||%-5s||%-5s||","No","Name","Roll Number","Year","Mark");
    }

    count = 0;
    for(int i=0;i<3;i++)
    {
        if(p[i].year == find)
        {
            printf("\n00%d||%-20s||%-11s||%-5d||%-5.2f||",i+1,p[i].fullname,p[i].rollNo,p[i].year,p[i].mark);
            count++;
        }
    }
}

void savefile(Student *p)
{
    FILE *fp;
    fp = fopen("student.dat","wb");

    if(fp == NULL)
    {
        printf("\nError!!");
    }
    else
    {
        fwrite(p,sizeof(Student),3,fp);
    }
    fclose(fp);
}

void ReadFile(Student *p)
{
      FILE *fp;
    fp = fopen("student.dat","rb");

    if(fp == NULL)
    {
        printf("\nError!!");
    }
    else
    {
        fread(p,sizeof(Student),3,fp);
    }
    fclose(fp);
}
