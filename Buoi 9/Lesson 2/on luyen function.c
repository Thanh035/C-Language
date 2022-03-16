#include<stdio.h>
void ShowInfor()
{
    char name[50] = "Phung Quang Thanh";
    char address[100] = "Ha Noi";
    char email[30] = "Phungquangthanh035@gmail.com";
    char phone[15] = "0364504862";
    int age = 18;

    printf("Ten: ");
    puts(name);
    printf("Tuoi: %d\n",age);
    printf("Dia chi: ");
    puts(address);
    printf("Email: ");
    puts(email);
    printf("SDT: ");
    puts(phone);
}

void ShowMessage(int msg)
{
    for(int i=0;i<msg;i++)
    {
        printf("\nHello %d",msg,i);
    }
}

int GiaiThua(int n)
{
    if(n == 1)
    return n;
    return n*GiaiThua(n-1);
    
}

int Sum(int m)
{
    int sum=0;
    for(int i=1;i<=m;i++)
    {
        sum+=i;
    }
    return sum;
}
int main()
{
    printf("Bai 1:");
    ShowInfor();
    
    printf("\nBai2: ");
    ShowMessage(1);
    ShowMessage(2);
    ShowMessage(3);

    printf("\n\nBai 3:");
    int n;
    printf("\nNhap N: ");
    scanf("%d",&n);
    printf("Giai thua N la: %d",GiaiThua(n));
    int x=GiaiThua(5);
    int y=Sum(10);
    if(x > y)
    {
        printf("\nGiai thua 5 > Tong 1 den 10");
    }
    else if(x < y)
    {
        printf("\nGiai thua 5 < Tong 1 den 10");
    }
    else
    {
        printf("\nGiai thua cua 5 = Tong 1 den 10");
    }
    return 0;
}