//WAP to add two numbers using pointer
#include<stdio.h>
int main()
{
	int a,b,*p,*q,sum;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	p=&a;
	q=&b;
	sum=*p+*q;
	printf("\nAddition of two numbers is:%d",sum);
	return 0;
}
