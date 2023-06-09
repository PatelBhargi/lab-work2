#include<stdio.h>

main()
{
	int i,num;
	printf("enter the last number:");
	scanf("%d",&num);
	printf("number divisible by 3 and 5 between 0 to %d are :\n",num);
	for(i=1;i<=num;i++)
	{
		if(i % 3 ==0 && i % 5 ==0)
		{
			printf("%d",i);
		}
	 } 
}
