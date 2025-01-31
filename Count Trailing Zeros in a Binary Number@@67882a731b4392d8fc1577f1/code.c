#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int count=0;
    while(1<<a==0)
    {
        a=1<<a;
        count+=1;
    }
    printf("%d",count);
    return 0;
}