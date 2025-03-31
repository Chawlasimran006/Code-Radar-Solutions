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
            }
        }
    }
    int largest=arr[n-1];
    int second_largest=-1;

    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]<arr[n-1])
        {
            second_largest=arr[i];
            break;
        }
        
    }
    printf("%d",second_largest);
}