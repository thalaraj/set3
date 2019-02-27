#include<stdio.h>

int main()
{
    int a,d,n,i,t=0,sum=0;
    printf("enter the starting element 'a' \n");
    scanf("%d%d%d",&a,&d,&n);
    for(i=a;i<=n;i=i+d)
    {
        if(t==0)
        {
            sum=a;
            t=1;
        }
        else
        {
            sum=sum+i;
        }
    }
    printf("%d",sum);
}
