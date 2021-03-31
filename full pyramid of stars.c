//full pyramid of stars
#include<stdio.h>
int main()
{
    int n,i,j,k,m=1;
    printf("enter no. of rows:");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i-1;j++)
           printf(" ");
        for(k=1;k<=(2*m)-1;k++)
        {
            printf("*");
        }
        printf("\n");
        m++;
    }
    return 0;
}

