//print reverse binary of a given number...
#include<stdio.h>
void main()
{
	int n,i,pos;
	
	printf("Enter number : ");
	scanf("%d",&n);

	pos=31;
	printf("Original binary is : ");
	while(pos >= 0)
	{
		printf("%d",n>>pos&1);
		pos--;
	}
	printf("\n");
		
	pos=0;
	printf("Reversed binary is : ");
	while(pos <= 31)
	{
		printf("%d",n>>pos&1);
		pos++;
	}
	printf("\n");
}

