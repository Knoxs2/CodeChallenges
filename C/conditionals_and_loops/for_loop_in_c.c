#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    const char* numbers[10] = {
        [1] = "one",
        [2] = "two",
        [3] = "three",
        [4] = "four",
        [5] = "five",
        [6] = "six",
        [7] = "seven",
        [8] = "eight",
        [9] = "nine"
    };
    
    for (int i = a; i <= b; i++ ) {
      if (0 < i && i <= 9 && numbers[i] ) {
        printf("%s\n", numbers[i]);
        
      } else if (i > 9) {
        
        if (i % 2 == 0) { printf("even\n"); } 
        else { printf("odd\n"); }
        
      }
    }

    return 0;
}

