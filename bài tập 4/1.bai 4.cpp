#include<stdio.h>
int main() {
	
  int n;
  long S = 0;
 
  do {
    printf("\nNhap vao so nguyen n lon hon 0 : ");
    scanf("%d", &n);
  if(n <= 0) 
    printf("\n So n phai lon hon 0, vui long nhap lai ");
  }
  while(n <= 0);

  printf("Cac uoc so cua %d là : ",n);
  for(int i = 1; i <= n; i++) {
    if(n % i == 0) {
      printf("%4d", i);
      S = S + i;
    }
  }
  printf("\nTong cac uoc so cua %d là: %ld", n, S);
 
}
