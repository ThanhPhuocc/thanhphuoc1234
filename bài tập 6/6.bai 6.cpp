#include <stdio.h>

int main() {
	int mang[5];
	
	for(int i=0;i<5;i++) {
		printf("mang[%d] = ",i);
		scanf("%d",&mang[i]);
		//
		}
		
		int min = mang[0];
		for(int i = 0;i<5;i++) {
			if(mang[i] < min){
				min = mang[i];
			}
		}
		printf("So nho nhat trong mang la %d\n", min);
		

}
