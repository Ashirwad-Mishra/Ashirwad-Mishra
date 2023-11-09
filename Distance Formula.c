#include<stdio.h>
#include<math.h>
void
main () 
{
  
float x1, y1, z1, x2, y2, z2, s;
  
printf ("Enter x1,y1,z1 and x2,y2,z2");
  
scanf ("%f%f%f%f%f%f", &x1, &y1, &z1, &x2, &y2, &z2);
  
s = sqrt (pow (x2 - x1, 2) + pow (y2 - y1, 2) + pow (z2 - z1, 2));
  
printf ("The distance between two points=%f", s);

} 
