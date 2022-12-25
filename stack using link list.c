#include<stdio.h>
struct stack
{
    int info;
    struct stack*next;
};
typedef struct stack STACK;
STACK*top = NULL;
STACK*ptr;
STACK*temp;
void push()
{
    temp=(STACK*)malloc(sizeof(STACK));
    temp->next=NULL;
    if(temp==NULL)
    {
        printf("overflow");
    }
    else
    {
        printf("enter data");
        scanf("%d",&temp->info);
        temp->next = top;
        top = temp;
    }
}
void pop()
{
    if(top == NULL)
    {
        printf("underflow");
    }
    else
    {
        ptr=top;
        top = top->next;
        printf("poped out item is %d",ptr->info);
        free(ptr);
    }

}
void display()
{
    ptr=top;
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
        printf("enter 1 for push and 2 for pop in stack and 3 for diplay");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
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
