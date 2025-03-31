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
    if(n==1)
    {
        printf("-1");
        return 0;
    }
    int is_sorted=0;
    for(int i=0;i<n;i++)
    {
        for(int p=0;p<n-1;p++)
        {
            for(int c=0;c<n-p-1;c++)
            {
                if(arr[c]>arr[c+1])
                {
                    int temp=arr[c];
                    arr[c]=arr[c+1];
                    arr[c+1]=temp;
                }
                is_sorted=1;
            }
        }
    }
    if(is_sorted=)
    {printf("%d",arr[n-2]);
    return 0;}
    else
    {printf("-1");
    return 0;}
    
}