//WAP to check a number is odd or even.
#include<stdio.h>
int main()
{
	int n,*p;
	printf("Enter number to check for odd/even:");
	scanf("%d",&n);
	p=&n;
	if(*p%2==0)
	printf("even");
	else printf("odd");
}
