#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "bhaskara.h"

float bhaskara (float a, float b, float c, float *x, float *y){
float delta;
delta = b*b - 4 *a *c;
if(a == 0) {
   return (1);
        }
        else {
             *x = (-b + sqrt(delta) )/ 2 * a;                
             *y = (-b - sqrt(delta) )/ 2 * a;
             return (2);
}
}
