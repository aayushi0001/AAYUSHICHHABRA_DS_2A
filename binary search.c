#include<stdio.h>
int main()
{
int i, arr[10], ele, m, n, mid;
printf("Enter 10 elements");
for(i=0; i<10; i++)
scanf("%d", &arr[i]);
printf("\nEnter element to be search");
scanf("%d", &ele);
m = 0;
n = 9;
mid = (m+n)/2;
while(m <= n)
{
if(arr[mid]<ele)
m= mid+1;
else if(arr[mid]==ele)
{
printf("\nThe number, %d found at Position %d", ele, mid+1);
break;
}
else
n = mid-1;
mid = (m+n)/2;
}
if(m>n)
printf("\nThe number, %d is not found in given Array", ele);
return 0;
}
