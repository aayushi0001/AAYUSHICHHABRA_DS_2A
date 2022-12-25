#include<stdio.h>
void main()
{
    int i,j,key=0,n,a[100];
    printf("enter the no of ele");
    scanf("%d",&n);
    printf("enter the ele");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=1;j<n;j++)
    {
        key=a[j];
        i=j-1;


            while(i>=0 && a[i]>key)
            {
                a[i+1]=a[i];
                i=i-1;
            }
            a[i+1]=key;

    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

}
