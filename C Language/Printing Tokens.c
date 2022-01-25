#include <stdio.h>

int main() 
{

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
      int len = strlen(s);
    for(int i = 0; i < len; i++) {
        if(s[i] == ' ') {
            printf("\n");
        }
        else {
            printf("%c", s[i]);
        }
    }
    free(s);
    return 0;
}
