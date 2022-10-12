#include<stdio.h>
void main()
{
    int a,b,c,d,e,avg;
    printf("enter 5 marks");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    avg = (a+b+c+d+e/5);
    printf("%d",avg);
}
