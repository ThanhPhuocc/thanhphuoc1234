#include <stdio.h>

int main(){

int a;
printf("Nhap a = ");
scanf("%d",&a);

if(a % 2 == 0){

printf("Vay %d la so chan",a);
}

else if(a % 2 == 1){
	printf("Vay %d la so le",a);
}
else{
	printf("So ban vua nhap la: 0");
}
return 0;
}
