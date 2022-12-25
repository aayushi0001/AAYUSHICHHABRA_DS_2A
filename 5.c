#include<stdio.h>
#define max 5

 struct queue
{
    int front;
    int rear;
    int qu[max];
}q;
int c=1;
void enqueue()
{
    while(c)
    {
            int ele;
    printf("enter ele to insert");
    scanf("%d",&ele);
    if(q.rear==max-1)
    {
        printf("overflow");
    }
    else
    {
        if(q.front=q.rear=-1)
        {
            q.front=q.rear=0;
            q.qu[q.rear]=ele;
        }
        else
        {
            q.rear=q.rear+1;
            q.qu[q.rear]=ele;
        }
    }
    printf("enter 1 to continue else press 0");
    scanf("%d",&c);


    }

}
void dequeue()
{
    if(q.front=-1)
    {
        printf("underflow");

    }
    else
    {
        printf("deleted item is %d",q.qu[q.front]);
        if(q.front=q.rear)
        {
            q.front=q.rear=-1;
        }
        else
        {
            q.front=q.front+1;
        }
    }
}
void main()
{
    int ch;
    do{
    printf("enter 1 for insertion ,2 for deletion and 3 for display");
    scanf("%d",&ch);

        switch(ch)
        {
        case 1:

            enqueue();
            break;
        case 2:
            dequeue();
            break;
        default:
            printf("enter correct value");
        }
    }while(ch!=3);
    return 0;
}
