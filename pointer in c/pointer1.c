#include<stdio.h>
int main()
{
	int a=20,b=30,*p,*q;
	p=&a;
	q=&b;
	printf("\nAddress of a = %x",*p);
    printf("\nAddress of b = %x",*q);
    printf("\nValue of a = %d",a);
    printf("\nValue of b = %d",b);
    return 0;
}
