#include<stdio.h>
void main()
{
	int a[50],s,i,pos,ele;
	printf("enter the size:");
	scanf("%d",&s);
	printf("enter the elements:");
	for(i=0;i<s;i++)
	scanf("%d",&a[i]);
	printf("enter the position to be inserted:");
	scanf("%d",&pos);
	printf("enter the elements:");
	scanf("%d",&ele);
	if(pos<=0||pos>s+1)
	printf("invalid");
	else
	{
	for(i=5-1;i>=pos-1;i--)
	{
	a[i+1]=a[i];
	}
	a[pos-1]=ele;
	s++;
	}
	printf("the elements after insertion are:");
	for(i=0;i<s;i++)
	printf("%d",a[i]);
}	
