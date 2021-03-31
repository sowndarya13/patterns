//hollow inverted half pyramid of numbers
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter the no. of rows:");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=n-i+1;j<=n;j++)
        {
            if(i==n||j==n-i+1||j==n)
              printf("%d ",j);
            else
              printf("  ");
        }
        printf("\n");
    }
    return 0;
}
