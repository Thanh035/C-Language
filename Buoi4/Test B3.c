#include<stdio.h>
#include<math.h>
int main()
{
    printf("Bai 3\n");
    float cd,cr,r;
    float CVhcn,DThcn;
    double CVht,DTht;
    int choose; 

    do{
        printf("\n-----------Menu chuong trinh------------\n");  //In ra menu chuong trinh
        printf("1.Tinh chu vi hinh chu nhat.\n");
        printf("2.Tinh dien tich hinh chu nhat.\n");
        printf("3.Tinh chu vi hinh tron.\n");
        printf("4.Tinh dien tich hinh tron.\n");
        printf("5.Thoat.\n");
        printf("Nguoi dung chon: ");scanf("%d",&choose);      //Nhap lieu 
        
        switch(choose)
        {   
            case 1:
            printf("\nNhap chieu dai hinh chu nhat: ");scanf("%f",&cd);
            printf("Chieu rong hinh chu nhat: ");scanf("%f",&cr);
             CVhcn = (cd+cr)*2;
            printf("Chu vi hinh chu nhat = %f\n",CVhcn);
            break;

            case 2:
            printf("\nNhap chieu dai hinh chu nhat: ");scanf("%f",&cd);
            printf("Chieu rong hinh chu nhat: ");scanf("%f",&cr);
             DThcn = cd*cr;
            printf("Dien tich hinh chu nhat = %f\n",DThcn);
            break;

            case 3:
            printf("\nBan kinh hinh tron la: ");scanf("%f",&r);
             CVht = 2*r*3.14;
            printf("Chu vi hinh tron = %lf\n",CVht);
            break;

            case 4:
            printf("\nBan kinh hinh tron la: ");scanf("%f",&r);
             DTht = 3.14*pow(r,2);
            printf("Dien tich hinh tron = %lf\n",DTht);
            break;

            case 5:
            printf("\nThoat chuong trinh\n");
            break;

            default:
            printf("\nNhap lai!");
        }
    }while(choose != 5);
    return 0;
}





