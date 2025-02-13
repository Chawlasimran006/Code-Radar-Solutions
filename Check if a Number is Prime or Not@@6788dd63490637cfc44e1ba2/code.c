#include<stdio.h>
int main()
{
    int n,i=2;
    scanf("%d",&n);
    int is_prime=1;
    if(n<=1)
    printf("Not Prime\n");
    else
    {
        while(i<=n/2)
        {
           if(n%i==0)
           is_prime=0;
           break; 
        }
        i++;
    }
    if(is_prime)
    printf("Prime\n");
    else
    printf("Not Prime\n");
    return 0;
    
}