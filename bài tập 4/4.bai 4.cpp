#include<stdio.h>
int main()
{
  int n,temp,max;
  do {
    printf("\nNhap vao so nguyen n lon hon 0 = ");
    scanf("%d", &n);
    
    if(n <= 0) 
      printf("\n So n phai lon hon 0, vui long nhap lai !");
}
while(n <= 0);
  temp = n;
  do {
     max = temp % 10;
  }while(temp /= 10);
  printf("\nChu so dau tien cua %d la = %d",n, max);
}
