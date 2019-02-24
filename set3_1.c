#include <stdio.h>

int main()
{
  int a[10],i,n,b=0;
  printf("enter the count");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    if(a[i]>=b)
      {
       b=a[i];
      }
  }
  printf("%d",b);
  return 0;
}
