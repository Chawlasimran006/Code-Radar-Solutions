#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        int temp=arr[i];
        int reverse=0;
        while(temp!=0)
        {
            int a=temp%10;
            reverse=reverse*10+a;
            temp=temp/10;
        }
        if(arr[i]==temp)
        {
            count++;
        }

    }
    printf("%d",count);
}