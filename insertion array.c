#include<stdio.h>
int main()
{
  int s[40],pos,i,size,value;
   printf("enter no of elements in array of students:");
   scanf("%d",&size);
   printf("enter %d elements are:\n",size);
   for(i=0;i<size;i++)
   scanf("%d",&s[i]);
   printf("enter the position where you want to insert the element:");
   scanf("%d",&pos);
   printf("enter the value into that poition:");
   scanf("%d",&value);
   for(i=size-1;i>=pos-1;i--)
      s[i+1]=s[i];
   s[pos-1]= value;
   printf("final array after inserting the value is\n");
   for(i=0;i<=size;i++)
    printf("%d\n",s[i]);
   return 0;
}
