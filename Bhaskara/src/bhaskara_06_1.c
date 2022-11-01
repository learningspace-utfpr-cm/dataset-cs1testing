#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "bhaskara.h"

float bhaskara (float a, float b, float c, float *x1, float *x2){

float delt;

delt = (b*b) - (4*a*c);

*x1 = -b + sqrt(delt) /(2*a);
*x2 = -b - sqrt(delt) /(2*a);
return (2);
}
