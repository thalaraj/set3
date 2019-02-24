#include <stdio.h>

int main()
{
  int a[100],i,n,b;
  printf("enter the count");
  scanf("%d",&n);
  scanf("%d",&a[1]);
  b=a[1];
  for(i=2;i<=n;i++)
  {
    scanf("%d",&a[i]);
    if(a[i]<=b)
      {
       b=a[i];
      }
  }
  printf("%d",b);
  return 0;
}
