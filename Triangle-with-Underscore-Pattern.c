# Triangle-with-Underscore-Pattern
#include<stdio.h>
#include <stdlib.h>

int main()
{
int n,c,i,j;
//char a=92;
scanf("%d",&n);
c=n;
for(i=0;i<=n;i++)
{
    printf("_");
}
printf("\n");
for(i=0;i<(n/2)+1;i++)
{
    for(j=0;j<=n;j++)
    {
        if(i==j)
        {
            printf("\\");
        }
        else if(j==c)
        {
            printf("/");
            c=c-1;
            break;
        }
        else
        {
        printf("*");
        }
    }
    printf("\n");
}
}
