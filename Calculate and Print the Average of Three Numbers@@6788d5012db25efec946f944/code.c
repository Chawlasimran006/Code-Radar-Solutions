#include <stdio.h>
float main()
{
    int a,b,c;
    float avg;
    scanf("%d %d %d",&a,&b,&c);
    avg=(a+b+c)/3;
    printf("Average: %.2f",avg);
    return 0;
}