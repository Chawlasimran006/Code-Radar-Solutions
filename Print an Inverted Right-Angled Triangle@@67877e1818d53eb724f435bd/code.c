#include<stdio.h>
int main()
{
    int N,i,j;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        for(j=N;j>i;j--)
        {
        printf("* ");
        }
        printf("\n");
    }
}