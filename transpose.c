#include<stdio.h>
void main()
{
    int a[10][10],transpose[10][10],m,n,i,j;
    printf("Enter rows and columns: ");
    scanf("%d%d",&m,&n);
    printf("Enter matrix elements\n");
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            transpose[j][i]=a[i][j];
    }
    printf("Transpose of the matrix\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",transpose[i][j]);
            if(j==m-1)
                printf("\n");
        }
    }
}
