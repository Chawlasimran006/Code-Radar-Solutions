#include<stdio.h>
int main()
{
    int N,i,j;
    scanf("%d",&N);
    for(i=0;i<=N-1;i++)
    {
        for(j=0;j<=N-1;j++)
        {
        printf("*");
        printf("\n");
        }
    }
}