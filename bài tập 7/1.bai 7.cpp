#include <stdio.h>
#include <conio.h>
#include <math.h>
 
#define MAX_SIZE_ARR 100
 
int get_element_furthest_x(int arr[], int sz, int x);
 
int main()
{
    int arr[MAX_SIZE_ARR], x, res;
    int n, i;
    do
    {
        printf("So luong phan tu = ");
        scanf("%d",&n);
    }while(n <= 0);
     
    // Input array
    for(i = 0; i < n; i++)
    {
        printf("\narr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
 
    // Input x
    printf("x = ");
    scanf("%d", &x);
 
    res = get_element_furthest_x(arr, n, x);
    printf("Tu %d toi xa nhat la = %d", x, res);
 
    getch();
    return 0;
}
/********************************************************
*Mô ta lay phan tu trong mang xa nhat x
* Parm: arr: mang
* sz: kích thuoc cua mang
* x:
* Return: phan tu float tu mang
*********************************************************/
int get_element_furthest_x(int arr[], int sz, int x)
{
    int i, idx = 0;
    int temp;
    int dist = abs(int(arr[0] - x));
 
    for(i = 1; i < sz; i++)
    {
        temp = abs(int(arr[i] - x));
        if(dist < temp)
        {
            dist = temp;
            idx = i;
        }
    }
    return arr[idx];
}
