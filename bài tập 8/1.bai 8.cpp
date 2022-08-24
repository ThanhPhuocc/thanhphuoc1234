#include <stdio.h>
bool tamgiac(int a,int b,int c){
	if (a+b>c && a+c>b && b+c>a){
		return true;
		}else{ 
		return false;}
	}
	
int chuvi(int a,int b, int c){
int cv;
  cv=a+b+c;
  return cv;
}

int main(){
   int a,b,c;
  printf("Nhap a = ");
  scanf("%d",&a);
   printf("Nhap b = ");
  scanf("%d",&b);
   printf("Nhap c = ");
  scanf("%d",&c);
 // int cv=chuvi(a,b,c);
  if (tamgiac(a,b,c)){
  	
   int cv=chuvi(a,b,c);
   printf("%d",cv);
   }else{
   	printf("Ban nhap khong phai la tam giac");
   }
}
