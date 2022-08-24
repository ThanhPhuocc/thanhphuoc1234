#include <stdio.h>
#include <conio.h>
#include <math.h>
 
#define MAX_SIZE_ARR 100
 
void find_range_contain_arr(float*, int, int*, int*);
 
int main()
{
    float arr[MAX_SIZE_ARR], x, res;
    int n, i;
    int a, b;
    do
    {
        printf("So luong phan tu = ");
        scanf("%d", &n);
    }while(n <= 0 || n > 100);
     
  	// dau vao mang
    for(i = 0; i < n; i++)
    {
        printf("\narr[%d] = ", i);
        scanf("%f", &arr[i]);
    }
    find_range_contain_arr(arr, n, &a, &b);
    printf("[%d, %d] chua mang", a, b);
    getch();
    return 0;
}
 
void find_range_contain_arr(float arr[], int sz, int* a, int* b)
{
    int i;
    float fa, fb;
    fa = fb = arr[0];
    for (int i = 1; i < sz; i++) { if(fa > arr[i])
        {
            fa = arr[i];
        }
        if (fb < arr[i])
        {
            fb = arr[i];
        }
    }
   
    *a = (int)floor(fa);
    *b = (int)ceil(fb);
}
