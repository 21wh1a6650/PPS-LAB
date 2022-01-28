#include <stdio.h>
int main()
{
	int a,b,c,max;
	printf("enter the values of a,b,c");
	scanf("%d %d %d",&a,&b,&c);
    if (a>b)
    {
    	if (a>c)
    	{
    		printf("max=%d",a);
		}
    	else
    	{
    		printf("max=%d",c);
		}
	}
	else 
	//(b>a)
	{
		if (b>c)
		{
			printf("max=%d",b);
		}
		else
		{
			printf("max=%d",c);
		}
	}
}
	
	
	
