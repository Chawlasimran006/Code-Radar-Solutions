#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int count=0;
    while(n&1==1)
    {
        n=n>>1;
        count++;
    }
    printf("%d",count);
    return 0;
}