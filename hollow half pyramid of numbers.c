//hollow half pyramid of numbers
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter the no. of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j==1||i==j||i==n)
              printf("%d ",j);
            else
              printf("  ");
        }
        printf("\n");
    }
    return 0;
}
