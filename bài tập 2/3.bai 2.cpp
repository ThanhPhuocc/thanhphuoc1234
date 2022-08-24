#include <stdio.h>
  
int main()
{
    int x,y,z;
  
    printf("Nhap x = ");scanf("%d",&x);	
	printf("Nhap y = ");scanf("%d",&y); 
	printf("Nhap z = ");scanf("%d",&z);	

	if(x>y>z) {
	printf("%d la so lon nhat",x);	
	}
	else if(x<y>z) {
	
	printf("%d la so lon nhat",y);
	}
	else if(x<y<z){
	
		printf("%d la so lon nhat",z);
	}
}
