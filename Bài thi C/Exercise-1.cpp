#include <stdio.h>
int main() {
  int n;
 
    printf("\nNhap vao so n = ");
    scanf("%d",&n);
    if(n < 1)
    {
      printf("\nSo phai lon hon hoac bang 1 , vui long nhap lai !");
    }
    
  float s = 0;
  
  for(int i = 1; i <= n; i++) {
    s = s + (1.0 / i);

  }
  
  printf("\nTong 1 + 1/2 + 1/3 + ... + 1/%d la = %.2f",n, s);
  
}

