#include<stdio.h>

int main() {
	
	int m=0;
	int n;
	// khai bao
	 
	printf("Nhap so luong phan tu: ");//in mh
	scanf("%d",&n);// nhap n man hinh
	
	int ary[n];// khai bao 
	for(int i=0;i<n;i++) {
	scanf("%d",&ary[i]);
	}
	
	int min;
	for(int i=0;i<n;i++) {
		if(ary[i]>0){
			m = ary[i];
		}
	}

	printf("So duong nho nhat la %d",m);
}

