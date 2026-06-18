#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int sum = 0;
    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        
    }
    
    for(int i=0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    /* doing two loops in order to respect challenge demand to iterate array */
    for(int i=0; i < n; i++) {
        sum += arr[i];
    }
    
    printf("%d",sum);
 
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
