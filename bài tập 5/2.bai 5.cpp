#include <stdio.h>
int main() {
	
   int c, n, a = 1;
   printf("nhap so de tinh giai thua = ");
   scanf("%d", &n);
   
   for (c = 1; c <= n; c++) 
   a = a * c;
   
   printf("Vay giai thua cua %d = %d\n", n, a);
	return 0;
}
