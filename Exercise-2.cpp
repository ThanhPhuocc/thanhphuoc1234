#include <stdio.h>

void reverseArray(int a[], int n){
	for(int i = n-1; i >= 0; i--){
		printf("a[%d] = %d\n", i, a[i]);
	}
}

int main() {
	int n;
	printf("Nhap so phan tu mang = ");
	scanf("%d",&n);
	
	int mang[n];
	for(int i=0;i<n;i++) {
		printf("mang[%d] = ",i);
		scanf("%d",&mang[i]);
	}
	printf("In nguoc mang = \n");
	reverseArray(mang, n);
	

}
