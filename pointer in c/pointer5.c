//pointer with array.
#include<stdio.h>
int main()
{
	int a[10],i,*p;
	//p=&a[0];
	p=a;
	printf("Enter Array elements:");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	
	printf("\nArray elements are:");
	for(i=0;i<10;i++)
	printf("%d\t",*(p+i));
}
