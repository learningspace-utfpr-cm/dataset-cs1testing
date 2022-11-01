#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "bhaskara.h"

float bhaskara (float a, float b, float c, float *x1, float *x2){

float del;
        
if(a == 0) {
     x1 = c / b;
     return (1);
     } else {
          del  = sqrt(pow(b, 2) - ((4 * a) * c));
          *x1 = (- b + del)/ (2 * a);
          *x2 = (- b - del)/ (2 * a);
          return (2);
        }
}
