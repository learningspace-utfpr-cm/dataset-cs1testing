#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "bhaskara.h"

float bhaskara (float a, float b, float c, float *x1, float *x2){

float del;
        
if(a == 0) {
     *x1 = c / b;
     return (1);
     } else {
         del  = pow(b, 2) - ((4 * a) * c);
         if(del < 0) {
                return (-1);
                } else {
                        *x1 = (- b + sqrt(del))/ (2 * a);
                        *x2 = (- b - sqrt(del))/ (2 * a);
                        return (2);
                }        
        } 
}
     
