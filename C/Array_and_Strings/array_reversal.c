#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    int start, end;
    start = 0;
    end = num - 1;
    int medium_value = 0;
    
    while (start < end) {
        medium_value = arr[start];
        arr[start] = arr[end];
        arr[end] = medium_value;
        
        start ++;
        end--;
        
    }

    /* Write the logic to reverse the array. */

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
