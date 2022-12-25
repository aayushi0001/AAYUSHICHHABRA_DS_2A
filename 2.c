#include<stdio.h>
void main()
{

    int i,j,k,p,q,m,n,sum=0;
    printf("enter the order of matrix a ");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("enter the elements of matrix a");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the order of matrix b ");
    scanf("%d%d",&p,&q);
    int b[p][q];
    printf("enter the elements of matrix b");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    int c[50][50];
    if(n==p)
    {
        c[i][j]=0;
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)


            {
                for(k=0;k<p;k++)
                {
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("\n%d",c[i][j]);
            }
        }

    }
    else
    {
        printf("multiplication not possible");
    }
    printf("addition of two matrix is");
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d",c[i][j]);
        }
    }


}
