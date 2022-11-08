#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "bhaskara.h"

float bhaskara (float a, float b, float c, float *total1, float *total2){
float delta;
        
        delta = b * b - 4 * a *c;
        *total1 = (-b + sqrt(delta)) / (2 * a);
        *total2 = (-b - sqrt(delta)) / (2 * a);
        return (2);
    }
