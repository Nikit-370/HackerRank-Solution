#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int a,m,sum;
    scanf("%d", &a);
    while(a>0)
    {
    m=a%10;
    sum=sum+m;
    a=a/10;
    }
    printf("%d",sum);
    return 0;
}
