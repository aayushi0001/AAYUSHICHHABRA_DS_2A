#include<stdio.h>
void main(){
    int i,j,m,n;
    scanf("%d%d",&m,&n);
    int a1[m][n],a2[m][n],a3[m][n];
    printf("Enter the elements");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a1[i][j]);
        }
    }
    printf("Enter the elements");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a2[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            a3[i][j]=a2[i][j]+a1[i][j];
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d",a3[i][j]);
        }printf("\n");
    }}
