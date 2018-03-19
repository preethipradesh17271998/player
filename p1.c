#include <stdio.h>
#include<string.h>
int main()
{
	char a[10];
	int i,l,flag=0;
	printf("enter the string ");
		scanf("%s",&a);
	
	l=strlen(a);
	for(i=l-i;i>=0;i--)
	{
		printf("%c",a[i]);
		
	}
	
	return 0;
}
