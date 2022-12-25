#include<stdio.h>
void main()
{
    int a[10],n,max,i;
    printf("enter the no of elemnts of array");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n+1;i++)
    {
        if (max<a[i])
            max=a[i];

    }
    printf("%d",max);
}
