#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10][10],b[10][10],add[10][10],i,j,r,c;
    printf("Enter a Matrix Dimensions : r,c");
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("Enter a Matrix Dimensions : r,c");
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            add[i][j] = a[i][j]+b[i][j];
        }
    }
    for(i=0;i<c;i++)
    {
     for(j=0;j<r;j++)
     {
         printf("%d\t",add[i][j]);
     }
     printf("\n");
    }
    getch();
}