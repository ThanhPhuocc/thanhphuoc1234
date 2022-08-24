#include<stdio.h>
int main() {
	
  int i, n, temp;
  int max = 0;

  do {
    printf("\nNhap vao so nguyen duong n: ");
    scanf("%d", &n);
}
  while(n < 0 && printf("\nSo n phai lon hon bang 0!!"));
  temp = n;
  if(n == 0)
	max = 0;
  do {
    i = n % 10;
    if(i > max)
    {
      max = i;
    }
  }while(n /= 10);
  printf("\nChu so lon nhat trong %d là: %d",temp, max);
}
