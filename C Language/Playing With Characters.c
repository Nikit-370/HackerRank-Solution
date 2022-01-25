#include<stdio.h>
int main() 
{
    char ch;
    char s[10];
    char sen[80];
    scanf("%c",&ch);
    printf("%c\n",ch);
    scanf("%s",&s);
    printf("%s\n",s);
    scanf("\n");
    scanf("%[^\n]%*c",sen);
    printf("%s",sen);
    return 0;
}
