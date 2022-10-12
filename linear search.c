#include <stdio.h>
void main()
{
int a[10],n,i,ele,c=0;
printf("enter size of array ");
scanf("%d",&n);
printf("enter array elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the elements need to search");
scanf("%d",&ele);
for(i=0;i<n;i++)
{
if(ele==a[i])
c++;
}
if(c>0)
printf("element found %d times");
else
printf("not found");
}
