#include<stdio.h>
int main() {
  int n;
  float f;
  f = 0;
  
    printf("\nNhap vao so n = ");
    scanf("%d", &n);
     
  for(int i = 1; i <= n; i++) {
    f = f + 1.0 / i;
    printf("i = %d , f = %.2f\n",i,f);
  }
  
  printf("\nTong 1 + 1/2 + 1/3 + ... + 1/%d la = %.2f",n, f);
  return 0;
}
