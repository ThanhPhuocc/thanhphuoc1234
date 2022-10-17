#include<stdio.h>

int main() {
   int a, b, i, hcf;

   a = 14;
   b = 20;

   for(i = 1; i <= a || i <= b; i++) {
   if( a%i == 0 && b%i == 0 )
      hcf = i;
   }

   printf("USCLN = %d", hcf);
   
   return 0;
}
