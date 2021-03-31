//palindrome pyramid patterns for eg.n=5
/*      1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1 */
#include<stdio.h>
int main()
{
 int i,j,n,count,l;
 printf("enter no. of rows:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     count=1;
     for(j=1;j<=n-i;j++)
       printf("  ");
    for(j=0;j<((2*i)-1);j++)
    {
        if(j<=((2*i)-1)/2)
        {
          l=count++;
          printf("%d ",l);
        }
        else
          printf("%d ",--l);
    }
    printf("\n");
 }
 return 0;
}
