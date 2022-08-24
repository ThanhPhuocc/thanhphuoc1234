#include <stdio.h>

int main() {
	int n;
	printf("Nhap n = ");scanf("%d",&n);
	
	int arr[n];
	printf("Nhap cac phan tu cua tap hop : \n");
	for(int i=0;i<n;i++) 
		scanf("%d",&arr[i]);
	
	bool f = 0;															 
	for(int i=n-1;i>=0;i--) {
		if(arr[i] % 2 == 1) {
			printf("So le cuoi cung = %d",arr[i]);
			f = 1;
			break;
		}
	}
	if(f == 0) 
		printf("Khong co so le nao trong danh sach ");
	
}
