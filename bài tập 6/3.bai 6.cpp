#include<stdio.h>
#include<conio.h>
int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
int main()
{
 int dem = 0, x;
 printf("nhap so x: ");
 scanf("%d", &x);
 for (int i = 0; i < 10; i++)
 
 if (x == a[i])
 {
  printf("x thuoc mang");
  dem++;
 }
 if (dem == 0)printf("x khong thoc mang");
 getch();
}
