#include<stdio.h>
int main()
{
    int N,i;
    char j;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        for(j='A';j<=N;j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
}