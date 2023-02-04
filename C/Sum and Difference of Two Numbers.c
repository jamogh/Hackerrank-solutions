#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b,sum,diff;
    float c,d,fsum,fdiff;
    scanf("%d %d", &a,&b);
    scanf("\n%f %f", &c,&d);
    sum = a+b;
    diff = a-b;
    fsum = c+d;
    fdiff = c-d;
    printf("%d %d",sum,diff);
    printf("\n%.1f %.1f", fsum, fdiff);
	
    
    return 0;
}
