#include <stdio.h>
#include<string.h>
int main()
{
	char a[10];
	int i,l;
	printf("enter the string ");
		scanf("%s",&a);
	
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		printf("%c",a[i]);
		
	}
	printf(".");
	
	return 0;
}
