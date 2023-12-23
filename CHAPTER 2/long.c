#include <stdio.h>
#include <math.h>

int main(){
float lat1, lat2, lon1, lon2, d ;
scanf ( "%f %f", &lat1, &lon1);
scanf ( "%f %f", &lat2, &lon2) ;
d= 3963 * acos ( sin (lat1) *sin (lat2) + cos (lat1) * cos (lat2)* cos ( lon2 - lon1)) ;
printf ("Distance between Place1 and Place 2: %fn", d);
}
