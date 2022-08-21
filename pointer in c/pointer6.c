//pointer with function.
#include<stdio.h>
void add(int *,int *);
int main()
{
	int a,b,*p,*q;
	printf("Enter two number:");
	scanf("%d%d",&a,&b);
	p=&a;
	q=&b;
	add(p,q);
	return 0;
	
	
}
void add(int *p, int *q)
{   
     int c;
     c=*p+*q;
     printf("\nAddition of two number is:%d",c);
	
}
