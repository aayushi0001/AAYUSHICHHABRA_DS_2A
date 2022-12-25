#include<stdio.h>
void main()
{
    int i,j,n,a[100],temp=0 ,smallest=0;
    printf("enter the number of ele in array");
    scanf("%d",&n);
    printf("enter the ele");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n-1;j++)
    {
        smallest=j;
        for(i=j+1;i<n;i++)
        {
            if(a[i]<a[smallest])
            {
                smallest=i;
            }
        }
        if(smallest!=j)
        {
          temp=a[j];
        a[j]=a[smallest];
        a[smallest]=temp;
        }

    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
