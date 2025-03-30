void printPrimesInRange(int a, int b)
{
    for(int i=a;i<=b;i++)
    {
        if(i==0 || i==1)
        return 0;
        if(i==2)
        printf("%d ",i);
        for(int j=0;j<=i/2;j++)
        {
            if(i%j==0)
            return 0;
        }
        printf("%d",i);
    }
}