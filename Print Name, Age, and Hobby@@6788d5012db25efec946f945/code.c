#include <stdio.h>
int main()
{
    int a;
    char n,h;
    scnaf("%s %d %s",&n,&a,&h);
    printf("Name: %s\n",n);
    printf("Age: %d\n",a);
    printf("Hobby: %s\n",h);
    return 0;
}