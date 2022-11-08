#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "bhaskara.h"

float bhaskara (float a, float b, float c, float *x1, float *x2){
float delta;
delta = b*b - 4*a*c;
*x1 = (-b + sqrt(delta)) / (2*a);
*x2 = (-b - sqrt(delta)) / (2*a);
return (2);
}
