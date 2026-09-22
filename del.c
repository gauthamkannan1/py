#include<stdio.h>
void main()
{
int ar[50],s,i,pos,ele;
printf("enter the size:");
scanf("%d",&s);
printf("enter the elements in an array:");
for(i=0;i<s;i++)
{
scanf("%d",&ar[i]);
}
printf("enter the position of the element to be deleted");
scanf("%d",&pos);
if(pos<=0||pos>s)
{
printf("invalid position");
}
else
{
for(i=pos-1;i<s-1;i++)
{
ar[i]=ar[i+1];
}
}
s--;
printf("array after deletion");
for(i=0;i<s;i++)
{
printf("%d",ar[i]);
}
}
