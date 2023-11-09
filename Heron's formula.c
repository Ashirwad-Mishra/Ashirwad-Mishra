#include<stdio.h>
#include<math.h>
int
main () 
{
  
float a, b, c, s, area;
  
printf ("Enter the first side of traingle=");
  
scanf ("%f", &a);
  
printf ("Enter the secomd side of traingle=");
  
scanf ("%f", &b);
  
printf ("Enter the third side of traingle=");
  
scanf ("%f",&c);
  
s = (a + b + c) / 2;
  
area = sqrt (s*(s - a)*(s - b)*(s - c));

printf ("area of the traingle = %f", area) ;
}
