#include <stdio.h>
  
int main()
{
    int x;
  
    printf("Nhap x = ");
    scanf("%d", &x);
    if (x > 0){
	
        printf("%d la so duong \n", x); 
    }
    else if (x < 0){
	
        printf("%d la so am \n", x);
    }
    else{
	
        printf("0 la so khong duong va khong am");
    }
}
