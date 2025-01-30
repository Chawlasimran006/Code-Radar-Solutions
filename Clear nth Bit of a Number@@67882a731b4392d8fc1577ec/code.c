#include <stdio.h>
int main()
{
    int a,n,num;
    scanf("%d%d",&a,&n);
    num=a & ~(1<<n);
    printf("%d",num);
    return 0;
}