#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
 
    int t1, t2;
    t1 = *a + *b;
    t2 = abs(*a - *b);
    *a = t1;
    *b = t2;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}