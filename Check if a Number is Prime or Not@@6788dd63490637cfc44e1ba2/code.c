#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    if(n<=1)
    printf("Not Prime");
    else
    {
        for(i=2;i<=i**(1/2);i++)
        {
            n%i==0;
            printf("Prime");
        }
    }
    return 0;
    
}