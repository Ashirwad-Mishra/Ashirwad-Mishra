#include<stdio.h>
#include<math.h>
void main()
{
    int choice;
    printf("Enter no from 1 to 4\n");
    printf("1. Rectangle\n");
    printf("2. square\n");
    printf("3. Triangle\n");
    printf("4. circle\n");
    scanf("%d",&choice);
    switch (choice) {
        case 1: {
            // For a rectangle
            float length, breadth, area;
            printf("Enter the length = ");
            scanf("%f",&length);
            printf("Enter the breadth = ");
            scanf("%f",&breadth);
            area=length*breadth;
            printf("Area of rectangle=%f",area);
        }
        case 2: {
           // for a square
           float side, area;
           printf("Enter the side: ");
           scanf("%f",&side);
           area=side*side;
           printf("Area of square = %f",area);
        }
        case 3: {
            // for a triangle
         float a, b, c, s, area;

         printf ("Enter the first side of traingle = ");

         scanf ("%f", &a);

         printf ("Enter the secomd side of traingle = ");

         scanf ("%f", &b);

         printf ("Enter the third side of traingle = ");

         scanf ("%f",&c);

         s = (a + b + c) / 2;

         area = sqrt (s*(s - a)*(s - b)*(s - c));

         printf ("area of the traingle = %f", area) ;
           }
        case 4:{
            // for circle
            float radius, area;
            printf("Enter The radius: ");
            scanf("%f",&radius);
            area=3.14156*radius*radius;
            printf("Area of circle= %f",area);
        }    
    }
}
