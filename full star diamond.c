#include<stdio.h>
int main()
{
    int n,space,stars=1,i,j,k;
    printf("enter no. of rows:");
    scanf("%d",&n);
    space=n-1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=space;j++)
          printf(" ");
        for(k=1;k<=stars;k++)
           printf("*");
        if(space>i)
        {
          space=space-1;
          stars=stars+2;
        }
        if(space<i)
        {
          space=space+1;
          stars=stars-2;
        }
        printf("\n");
    }
    return 0;

}
