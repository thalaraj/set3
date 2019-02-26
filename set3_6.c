#include<stdio.h>

int main()
{
   int n,a[100],i,l,j,k;
   printf("enter the count");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(j=1;j<=n;j++)
   {
      for(k=j+1;k<=n;k++)
      {
        if(a[j]>=a[k])
        {
        l=a[j];
        a[j]=a[k];
        a[k]=l;
            
        }
      }
   
   }
        printf(" %d\t",a[j/2]);

}
