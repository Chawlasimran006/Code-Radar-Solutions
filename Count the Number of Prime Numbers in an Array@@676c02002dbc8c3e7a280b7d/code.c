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
        if(arr[i]<2)
        continue;
          int is_prime=1;
        for(int j=2;j<=arr[i]/2;j++)
        {
            if(arr[i]%j==0)
            {is_prime=0;
            break;}
        }
        if(is_prime)
        count++;
    }
    printf("%d",count);
}