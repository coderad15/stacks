#include<stdio.h>
int top=-1;
#define MAX 100
int a[MAX],i,n;
void push(int);
void pop();
void print();
void main()
{
	int c;
	while(1)
	{
		printf("**********************************************\n");
		printf("1.Store the element\n2.Delete the element\n3.Display the stack.\n");
		printf("**********************************************\n");
		printf("Enter your choice.\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				printf("Enter the element you want to store.\n");
				scanf("%d",&n);
				push(n);
				break;
			case 2:
				pop();
				break;
			case 3:
				print();
				break;
		}
	}
}
void push(int n)
{
	if(top==MAX-1)
	{
		printf("Stack is Full.\n");
	}
	else
	{
		top=top+1;
		a[top]=n;
		printf("%u\n",&a[top]);
	}
}
void pop()
{
	if(top==-1)
	{
		printf("Stack is empty.\n");
	}
	else
	{
		top=top-1;
		printf("Element is poped out of stack successfully\n");
	}
}
void print()
{
	for(i=0;i<=top;i++)
	{
		printf("%d\t%d\t",a[i],&a[i]);
	}
	printf("\n");
}
