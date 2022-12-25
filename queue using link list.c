#include<stdio.h>
struct queue
{
    int info;
    struct queue*next;
};
typedef struct queue que;
que*front;
que*rear;
que*temp;
que*ptr;
void enqueue()
{
    temp=(que*)malloc(sizeof(que));
    temp->next=NULL;
    if(temp==NULL)
    {
        printf("overflow");
    }
    else
    {
        printf("enter data");
        scanf("%d",&temp->info);
        if(front == NULL)
        {
            front = temp;
            rear = temp;
        }
        else
        {
            rear->next=temp;
            rear=temp;
        }
    }
}
void dequeue()
{
    ptr=front;
    if(front == NULL)
    {
        printf("underflow");
    }
    else
    {
        if(front == rear)
        {
            front = rear = NULL;
            printf("deleted item is %d",ptr->info);
            free(ptr);
        }
        else
        {
            front = front->next;
            printf("deleted item is %d",ptr->info);
            free(ptr);
        }
    }
}
void display()
{
    ptr=front;
    while(ptr!=NULL)
    {

        printf("%d->",ptr->info);
        ptr=ptr->next;
    }
}
void main()
{
    int ch;
    do{
        int ch;
        printf("enter 1 for insertion and 2 for deletion in queue,3 for display");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        default:
            printf("choose correct option");
            break;
        }
    }while(ch!=4);
    return 0;
}

