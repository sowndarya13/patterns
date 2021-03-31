#include<stdio.h>
int main()
{
    int n,i,j,k=1,count=1,l=0;
    printf("enter the no. of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
           printf(" ");
        while(k<=i)
        {
            if(k==1||i==n)
             printf("%d ",k);
            else
            {
              j=k;
              while(j<2*l)
               {
               printf(" ");
               j++;
               }
               break;
             }
            k++;
        }
        if(i!=n&&i!=1)
           printf("%d",++count);
        printf("\n");
        l++;
        k=1;
    }
    return 0;
}
