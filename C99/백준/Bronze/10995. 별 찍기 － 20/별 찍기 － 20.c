#include<stdio.h>

int main()
{
    int n;
    int i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i%2==1)
        {
            printf(" ");
        }
        for(j=0;j<n;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}