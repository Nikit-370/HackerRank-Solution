#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i,j;
    float a,b;
    scanf("%d%d",&i,&j);
    scanf("%f%f",&a,&b);
    printf("%d %d\n",i+j,i-j);
    printf("%0.1f %0.1f",a+b,a-b);
    return 0;
}
