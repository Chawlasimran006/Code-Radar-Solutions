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
    int is_sorted=1;
    for(int i=0;i<n;i++)
    {
        for(int p=0;p<n-1;p++)
        {
            for(int c=0;c<n-p-1;c++)
            {
                if(arr[c]>arr[c+1])
                is_sorted=0;
            }
        }
    }
    if(is_sorted)
    printf("Sorted");
    else
    printf("Not Sorted");
}