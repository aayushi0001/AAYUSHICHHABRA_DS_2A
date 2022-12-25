#include<stdio.h>
void main()
{
    int a[100],i,n,j,k;
    printf("enter the number of elements in array");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number you want to search in array");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            printf("the number is found at index %d",i);
            break;
        }

    }
    if(i==n)
    {
        printf("element not found");
    }
}
