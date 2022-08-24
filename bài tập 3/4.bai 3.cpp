#include<stdio.h>
int main(){
	int x;
	int y=0;
	int n;
	printf("Nhap so n = ");
	scanf("%d",&n);
	for(x=1;n!=0;n/=10){
		x=n%10;
		y=y*10+x;
	}
	printf("So nghich dao la = %d ",y);

}
