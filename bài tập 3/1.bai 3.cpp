#include<stdio.h>

int main() {
	int n = 10;
	int tong = 0;
	 
	for(int i = 1;i<n;i++) {
	
	if(i % 2 == 1) {
		tong = tong + i; 

		printf("Tong cac so le %d \n",i);
		}
	}
}
