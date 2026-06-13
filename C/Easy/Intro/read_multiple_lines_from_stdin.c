#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX_LINE 1024
int main()
{
    char buffer[MAX_LINE];


    while(fgets(buffer, sizeof(buffer), stdin) != NULL) {
        if (buffer[0] == '\n' || buffer[0] == '\r') {
            break;
        }
        printf("Processed: %s", buffer);
    }
    return 0;
}
