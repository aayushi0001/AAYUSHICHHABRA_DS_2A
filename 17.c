#include<stdio.h>
void main()
{
    int i, arr[100], n, first, last, middle,m;
    printf("enter the number of elements in array");
    scanf("%d",&m);
    printf("Enter elements of array ");
    for(i=0; i<m; i++)
        scanf("%d", &arr[i]);
    printf("Enter element to be search: ");
    scanf("%d", &n);
    first = 0;
    last = m-1;
    middle = (first+last)/2;
    while(first <= last)
    {
        if(arr[middle]<n)
            first = middle+1;
        else if(arr[middle]==n)
        {
            printf("\nThe number, %d found at Position %d", n, middle+1);
            break;
        }
        else
            last = middle-1;
        middle = (first+last)/2;
    }
    if(first>last)
        printf("\nThe number, %d is not found in given Array", n);

    return 0;
}
