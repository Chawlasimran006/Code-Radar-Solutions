#include <stdio.h>
int main()
{
    float a,b;
    char ch;
       scanf("%f%f",&a,&b);
       scanf("%c",&ch);
    switch(ch)
    {
        case '+':
        printf("%d",a+b);break;
        case '-':
        printf("%d",a-b);break;
        case '*':
        printf("%d",a*b);break;
        case '/':
        printf("%d",a/b);break;
        default:
        printf("Invalid");
    }
    return 0;
}