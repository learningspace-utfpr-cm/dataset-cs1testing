#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "bhaskara.h"

float bhaskara (float A, float E, float I, float *x1, float *x2){
int  delta;
delta = (E*E) - (4*A*I);
*x1 = -E + sqrt(delta) /(2*A);
*x2 = -E - sqrt(delta) /(2*A);
return (2);
}
