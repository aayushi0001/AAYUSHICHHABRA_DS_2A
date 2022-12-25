#include<stdio.h>
#define max 5
int queue[max];
int front =-1;
int rear =-1;
int item;

void insert()
{

    if(front==(rear+1)%max)
    {
        printf("overflow");
        return;
    }
    if(front==-1)
    {
        front=rear=0;
    }
    else
    {
        rear=((rear+1)%max);
    }
    queue[rear]=item;
}
void deletion()
{
    if(front==-1)
    {
        printf("underflow");
        return;
    }
    printf("elem delted from queue is %d",queue[front]);
    if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        front=((front+1)%max);
    }
}
void display()
{
    int i=front;
    if(front==-1 && rear==-1)
    {
        printf("\n Queue is empty");
    }
    else
    {
        printf("\nElements in a Queue are :");
        while(i<=rear)
        {
            printf("%d,", queue[i]);
            i=(i+1)%max;
        }
    }
}
void main()
{
    int n;
    do
    {
    printf("enter 1 for insertion , 2 for deletion , 3 for display");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("enter the ele u want to insert");
        scanf("%d",&item);
        insert();
        break;
    case 2:
        deletion();
        break;
    case 3:
        display();
        break;
    case 4:
        break;
    default:
        printf("wrong choice");
        }
    }
    while(n!=4);
    return 0;

}
