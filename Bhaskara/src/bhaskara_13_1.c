#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "bhaskara.h"

float bhaskara (float a, float b, float c, float *res1, float *res2){
float delta;
delta = b*b - 4*a*c;
*res1 = (-b + sqrt(delta)) / (2*a);
*res2 = (-b - sqrt(delta)) / (2*a);
return (2);
}
