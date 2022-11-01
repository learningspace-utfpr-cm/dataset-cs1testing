#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "bhaskara.h"

float bhaskara (float a, float b, float c, float *x1, float *x2){

float del;
        
if (a != 0 ){
   del = pow (y, 2) - (4*x*z);
              
   if (del < 0){
      return (-1);
   }
       
   *x2 = (- y - sqrt(del)) / (2 * x);
   *x1 = (- y +sqrt(del)) / (2 * x);
   return (2);
   } else {
        *x1 = z/y;
        return (1);
}
}
