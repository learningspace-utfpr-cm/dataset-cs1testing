#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "bhaskara.h"

float bhaskara (float a, float b, float c, float *x1, float *x2){

 int delta,valor;

 delta = b*b-4*a*c; 

  if (delta<0)   {
          return (-1);
  }
  
  else if(a==0) {
          
           valor= (-c)/b;
           return (-1);
   }
   else {
  
  x1 = -b + sqrt(delta) / 2*a ;
  x2 = -b - sqrt(delta) / 2*a ;
  return (2);  
 }
  
}
