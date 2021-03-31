//palindrome pyramid patterns for eg.n=5
/* A
   A B A
   A B C B A
   A B C D C B A
   A B C D E D C B A */
#include<stdio.h>
int main()
{
 int i,j,n;
 char alp,l;
 printf("enter no. of rows:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     alp='A';
    for(j=0;j<((2*i)-1);j++)
    {
        if(j<=((2*i)-1)/2)
        {
          l=alp++;
          printf("%c ",l);
        }
        else
          printf("%c ",--l);
    }
    printf("\n");
 }
 return 0;
}
