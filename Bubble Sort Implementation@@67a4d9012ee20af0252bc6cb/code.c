// Your code here...
#include<stdio.h>
bubbleSort(arr, n)
{
    int p,c;
    for(p=0;p<n-1;p++)
    {
        for(c=0;c<n-p-1;c++)
        {
            if(arr[c]<arr[c+1])
            {
                temp=arr[c];
                arr[c]=arr[c+1];
                arr[c+1]=temp;
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}