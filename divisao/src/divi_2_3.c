#include <stdio.h>

float divi (int x, int y){
       float z;
     
        if (y <= 0) {
            return (0);
        } else {
            z = x/y;
            return (z);        
        }
	}