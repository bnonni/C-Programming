#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i, k;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    k = num - 1;
    for(i = 0; i < num; i++)
    {
     int temp = arr[i];
     arr[i] = arr[k];
     arr[k] = temp;
     k--;
     if (i == (k+1) || i == k)
     {
       break;
     }
    }

    for(i = 0; i < num; i++)
        printf("%d ", arr[i]);
    return 0;
}