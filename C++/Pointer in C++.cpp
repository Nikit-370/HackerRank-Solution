#include <stdio.h>
#include<stdlib.h>

void update(int *a,int *b) 
{
    // Complete this function    
    int x, y;
    // Complete this function  
    x = *a + *b ;
    y = *a - *b ;
    *a = x;
    *b = abs(y);

}

int main() 
{
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}