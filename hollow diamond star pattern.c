//hollow diamond star pattern
#include<stdio.h>
int main()
{
 int i,j,n,count,l=0,k,m;
 printf("enter no. of rows in upper half:");
 scanf("%d",&n);
 m=n;
 for(i=1;i<=n;i++)
 {
     for(j=1;j<=n+1-i;j++)
       printf("*");
       count=i;
      while(count<=2*l)
      {
          printf("  ");
          count++;
      }
     for(k=1;k<=n+1-i;k++)
       printf("*");
     l++;
     printf("\n");
 }
 for(i=1;i<=n;i++)
 {
     for(j=1;j<=i;j++)
       printf("*");
       count=1;
      while(count<=2*(m-i))
      {
          printf(" ");
          count++;
      }
     for(k=1;k<=i;k++)
       printf("*");
     l++;
     printf("\n");
 }
 return 0;
}
