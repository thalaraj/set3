#include <stdio.h>

int main()
{
    int a[100],i,j,n;
    scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   scanf("%d\n",&a[i]);
   printf("%d\t%d\n",a[i],i);
 }
 return 0;
}
