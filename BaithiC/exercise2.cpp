#include <stdio.h>

int main(){
	int m;
	printf("Nhap m = ");
	scanf("%d",&m);
	printf("Tat ca so chan tu n den m la = ");
	
	for(int n = 1;n <= m;n++){
		if(n % 2 == 0){
			printf("%d\n",n);
		}
	}
}
