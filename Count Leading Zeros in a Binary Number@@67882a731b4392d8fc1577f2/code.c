#include <stdio.h>
int main()
{
    int a,n;
    scanf("%d",&a);
    int count=0;
    n=1<<31;
    while(a& n==0)
    {
        a=n>>1;
        count++;
    }
    printf("%d",count-1);
    return 0;

}