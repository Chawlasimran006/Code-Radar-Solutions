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
    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            temp=-arr[i];
        }
        int sum=0;
        int temp=arr[i];
        while(temp!=0)
        {
        int a=temp%10;
        sum=sum+a;
        temp=temp/10;
        }
        if(arr[i]<0)
        printf("-%d ",sum);
        else
        printf("%d ",sum);
    }
}