int isPrime(int num)
{
    if(t==1)
        return 0;
    if(t==2)
        return 1;
    for(int i=2;i<=t/2;i++)
    {
        if(t%i==0)
        return 0;
        else 
        return 1;
    }
}