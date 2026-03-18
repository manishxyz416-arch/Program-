#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10][10],b[10][10],i,j,r,c;
    printf("Enter a Matrix Dimensions : r,c");
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    for(i=0;i<c;i++)
    {
     for(j=0;j<r;j++)
     {
         printf("%d\t",b[i][j]);
     }
     printf("\n");
    }
    getch();
}