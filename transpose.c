#include<stdio.h>
void main()
{

    int n,m;
    printf("Enter the size of n X m matrix\n");
    scanf("%d%d",&n,&m);
    int a[n][m];
    int at[m][n];
    printf("Enter the elemnts of array\n");
    for(int i=0; i<n; i++)
    {

        for(int j=0; j<m; j++)
        {

            scanf("%d",&a[i][j]);
            at[j][i]=a[i][j];
        }
    }
    printf("The transpose is--------------\n");
    for(int i=0; i<m; i++)
    {

        for(int j=0; j<n; j++)
        {
            printf("%d\t",at[i][j]);
        }
        printf("\n");
    }


}
