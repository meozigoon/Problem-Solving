#include<stdio.h>
#include<string.h>

int main()
{
    char c[1000];
    scanf("%s",c);
    int i;
    for(i=strlen(c)-1;i>=0;i--)
    {
        printf("%c",c[i]);
    }
    return 0;
}