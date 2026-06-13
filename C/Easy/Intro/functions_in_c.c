#include <stdio.h>
#include <stdarg.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, ...) {
    va_list args;
    int max = 0;
    va_start(args, a);
    
    
    for(int i = 0; a > i; i++) {
        int num = va_arg(args, int);
        
        if (max < num) {
            max = num;
        }
        
    }
    va_end(args);
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
