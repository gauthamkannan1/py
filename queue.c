#include<stdio.h>
int q[10];
int front=-1,rear=-1;
void enq()
{
int value;
if(rear==size-1)
{
printf("Enter the value:");
scan("%d",&value);
if(front==-1)
front=0;
rear++;
q[rear]=value;
print("value inserted\n")
}}
void deq()
{
if(front==-1||front>rear)
{
printf("queue is empty\n");
}
else
{
printf("deleted value=%d\n",q[front]);
front++;
}}
void display()
{
int i;
if(front==-1||front>rear)
{
printf("Queue is empty\n");
}
else
{
printf("queue elements are:");
for(i=front;i<=rear;i++)
{
print("%d",q[i]);
}
printf("%d",q[i]);
}
printf("\n");
}}
int main()
{
int choice;
while(1)
{
printf("\n1.Enqueue");
printf("\n2.Dequeue");
printf("\n3.Display");
printf("\n4.Exit");
printf("\nEnter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:enq();
       break;
case 2:deq();
       break;
case 3:display();
       break;
case 4:return 0;
default:printf("invaild choice\n");
}
}
}
                        
}



