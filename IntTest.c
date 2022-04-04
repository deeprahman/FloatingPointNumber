/**
 * This program demostrats how to work with large floating point number. 
 * 
 * In the first section
 * 
 * Any floating point number x is cosidered as equal to FLT_MAX if the difference between x and FLT_MAX less than 0
 * 
 * In the second section
 * 
 * 
 * Any floating point number x is cosidered as equal to the constant  C   if the difference between x and c less than the constant E
 * 
 * 
 * NOTE: when dealing with the floating point number: determine how many decimal places to be displayed before coding.
 * 
 */

// #include <limits.h>
#include <float.h>
#include <stdio.h>
#include <math.h>
int main()
{
    const float C = 99.99; // approximately 1000000.00000
    const float E = 0.01;
    float x;
    x = FLT_MAX - 1.993456789;
    printf("%f\n", FLT_MAX);
    printf("The value of x is:   %f\n", x);
    if(fabs(x - FLT_MAX) > 0){
        printf("%f  is not  equal  to  %f\n",x, FLT_MAX);
    }else{
        printf("%f  is   equal  to  %f\n",x, FLT_MAX);
    }

    x = C - 0.001;  //  99.99 - 0.001 = 99.989
    if(fabs(x - C) < E){
        printf("%f  is   equal  to  %f\n",x, C);
    }else{
        printf("%f  is not  equal  to  %f\n",x, C);
    }
}