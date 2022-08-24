#include <stdio.h>
#include <conio.h>
#include <math.h>
#define MAX 100

void nhap(int a[],int n){
	
	do { 
	printf("\nNhap so phan tu = ");
	scanf("%d",&n);
	if(n<=0||n>MAX){
	printf("\nSo phan tu khong hop le. Xin kiem tra lai !");
	}
	}while(n<=0||n>MAX);
	for(int i=0;i<n;i++) {
	printf("\nNhap a[%d] = ",i); 
	scanf("%d",&a[i]);
}
}
void xuat(int a[],int n) {
	for(int i=0;i<n;i++) {
		printf("%d",a[i]);	
	}
}
int timx(int a[],int n) {
	int x = a[0];
	for(int i=1;i<n;i++) {
		x = (x > (fabs)(a[i]));
		}
		return x;
}
int main() {

	int n;
	int a[MAX];
	int b[MAX];
	
	nhap(a,n);
	xuat(a,n);
	int x = timx(a,n);
	
	printf("\nGia tri %d thoa dieu kien doan [-%d,%d] chua tat ca cac gia tri trong mang",x,x,x);
	getch();
	return 0;
	
}

