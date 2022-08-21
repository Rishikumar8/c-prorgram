//WAP to check a number is prime or not using pointer.
#include<stdio.h>
int main()
{
	int n,i,count=0,*p;
	printf("Enter number to check for prime:");
	scanf("%d",&n);
	p=&n;

	for(i=1;i<=*p;i++)
	{
		if(*p%i==0)
		count++;
	}
	if(count==2)
	printf("Prime");
	else 
	printf("not prime");
	return 0;
}
