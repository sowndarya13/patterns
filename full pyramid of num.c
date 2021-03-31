//Full pyramid of numbers
#include<stdio.h>
int main()
{
    int n,i,j,k=0,count1,l;
    printf("enter the no. of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        count1=i;
        for(j=1;j<=n-i;j++)
           printf("  ");
        while(k<(2*i)-1)
        {
            if(k<=((2*i)-1)/2)
            {
              l=count1++;
              printf("%d ",l);
            }
            else
              printf("%d ",--l);
            k++;
        }
        k=0;
        printf("\n");
    }
    return 0;
}
