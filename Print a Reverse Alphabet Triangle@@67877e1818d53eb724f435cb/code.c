#include<stdio.h>
int main()
{
    int N,i;
    char j;
    scanf("%d",&N);
    for(i=N;i>=1;i++)
    {
        for(j='A';j<='A'+1;j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
}