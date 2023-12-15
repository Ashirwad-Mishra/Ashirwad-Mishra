#include<stdio.h>
#include<math.h>
void main()
{
    int i,x=1,n;
    printf("Enter the value of n:  ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      x = x*i;
    }
    printf("%d! = %d",n,x);
}
