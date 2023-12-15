#include<stdio.h>
#include<math.h>
void main()
{
    int i,x,n,c=0;
    printf("Enter the number:  ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c = c + 1;
            printf("%d is a factor of %d\n",i,n);
        }
        
    }
    printf("So, It has total %d factors\n",c);
    if(c>2){
        printf("Hence, %d is a composite Number",n);
    }
    else{
        printf("Hence, %d is a prime number.",n);
    }
}
