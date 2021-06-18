#include<stdio.h>
int main()
{
   // int a[][] = {{1,2},{3,4}};   error -> except first all dimension bound
   // int a[3][] = {{1,2},{3,4}};
    int a[][3] = {{1,2},{3,4}}; //correct
    int i, j;
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            printf("%d ", a[i][j]);
    return 0;
}