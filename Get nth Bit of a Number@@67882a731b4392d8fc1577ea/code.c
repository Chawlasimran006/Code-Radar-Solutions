#include <stdio.h>
int main()
{
    int a,n;
    scanf("%d%d",&a,&n);
    if(a & (1<<n))
    printf("1");
    else
    printf("0");
    return 0;
}