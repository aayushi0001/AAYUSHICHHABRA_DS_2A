#include<stdio.h>
void main()
{
    int i,a[5],n;
    printf("Enter the size of an array\n");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        printf(" ");
        printf("%d",a[i]);
    }
}
