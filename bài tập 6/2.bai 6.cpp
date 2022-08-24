#include <stdio.h>
int main(){
	int n;
	printf("Nhap kich thuoc cua tap hop:");
	scanf("%d",&n);
	
	int arr[n];
	printf("NHap cac phan tu cua tap hop:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	int sum = 0,count =0;
	
	for(int i=0;i<n;i++){
		if(arr[i] %2 == 1) {
			sum += arr[i];
			count++;
		}
	}
	
	if(count >0){
		float tbc = (float)sum/count;
		printf("TBC so le: %f",tbc);
	}else{
		printf("Khong co so le nao trong mang");
	}
}
