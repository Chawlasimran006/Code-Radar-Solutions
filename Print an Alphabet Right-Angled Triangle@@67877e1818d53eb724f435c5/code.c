#include<stdio.h>
int main()
{
    int N,i,j;
    char ch;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        /*
        for(j='A';j<'A'+i;j++)
        {
            printf("%c ",j);
        }*/
        for(j=1;j<=i;j++)
        {
            ch='A';
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
}