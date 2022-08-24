#include <stdio.h>

int main() {

    int i,y,z=0;// khai bao 3 bien 

    printf("Nhap vao so nguyen: ");//hien man hinh
	scanf("%d",&y);// nhap man hinh

    printf("Cac uoc so la: ");// hien man hinh 

    for(i=1;i<=y;i++)// vonglapfor ····
    // bien cho bien i = 1;i nho hon hoac bang y;i++|i+1
    // y nhap vao tu ban phim

    if(y % i == 0) {
	// dieu kien 
    printf("%d\n",i);
	z++;

    }

    printf("\nSo uoc so la %d",z);

}
