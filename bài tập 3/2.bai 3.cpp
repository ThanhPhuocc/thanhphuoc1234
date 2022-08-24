#include <stdio.h>
int main () {
	int n,i;
	printf("Nhap n = ");scanf("%d",&n);

	if(n<24) {
		printf("Khong co so nao");
		return 0;
	}
		 printf("So be hon n chia het cho 2 va 3 la = ");
	for(int i=1;i<n;i++) {
		if(i % 6 == 0)
	 
		printf(" %d ",i);
	
	}	 
	
}
	 
