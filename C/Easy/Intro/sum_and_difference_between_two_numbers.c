#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int first_number;
    int second_number;
    float first_float;
    float second_float;


    scanf("%d %d\n%f %f", &first_number, &second_number, &first_float, &second_float);

    int sum = first_number + second_number;
    int diff = first_number - second_number;

    float sumf = first_float + second_float;
    float diff_f = first_float - second_float;


    printf("%d %d\n%.1f %.1f", sum, diff, sumf, diff_f);

    return 0;
}
