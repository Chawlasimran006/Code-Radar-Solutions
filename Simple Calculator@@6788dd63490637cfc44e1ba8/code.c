#include <stdio.h>
int main()
{
    int a,b;
    char ch;
       scanf("%d%d",&a,&b);
       scanf(" %c",&ch);
    switch(ch)
    {
        case '+':
        printf("%d",a+b);break;
        case '-':
        printf("%d",a-b);break;
        case '*':
        printf("%d",a*b);break;
        case '/':
        if (b==0)
        printf("Invalid");
        else{
        printf("%d",a/b);break;
        }
        default:
        printf("Invalid");
    }
    return 0;
}