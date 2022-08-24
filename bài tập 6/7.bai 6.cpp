#include <stdio.h>
int  main () {
	
	int n;
	printf("Nhap so mang n = ");
	scanf("%d",&n);
	
	int ary[n];
	for ( int i = 0 ;i < n; i++) {
		printf("mang[%d] = ",i);
		scanf("%d",&ary[i]);
	}
	int a = 0;
	int b = 0;
	for ( int i = 0 ; i < n; i++) {
		if (ary[i]> 0 ) {
		a = a + ary[i];
		if(b < a) 
		b = a;
		}
		else
		a = 0;
	}
		printf ("Tong day so lien tiep lon nhat la = %d", b);
}
