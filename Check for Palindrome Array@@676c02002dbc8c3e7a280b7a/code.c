#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int new_arr[n];
    for(j=0;j<n;j++)
    {
        for(i=n-1;i<=0;i--)
        {
            new_arr[j]=arr[i];
        }   
    }
    if(arr[i]==new_arr[j])
    printf("YES");
    else
    printf("NO");
}