#include <stdio.h>
int main() {
    int a;
    if(a&(1<<31)==1)
    printf("Set");
    else if(a&(1<<31)==0)
    printf("Not Set");
    return 0;
}