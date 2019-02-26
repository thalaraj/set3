#include <stdio.h>
#include<string.h>

int main() 
{
	char str[100];
	int n,i;
	printf("enter the string:");
	scanf("%s",str);
	n=strlen(str);
	for(i=0;i<n;i++)
	
		if(str[i]>='0' && str[i]<='9')
		{
			printf("\n YES");
		}
		else
		printf("\n NO");
	
	return 0;
}
