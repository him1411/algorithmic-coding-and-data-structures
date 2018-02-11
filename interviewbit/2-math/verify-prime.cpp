int Solution::isPrime(int A) 
{
    if (A==2)
    {
        return 1;
    }
    else if (A==1)
    {
        return 0;
    }
    int flag =0;
    for(int i =2; i <= sqrt(A);i++)
    {
        if(A%i ==0)
        {
            flag=1;
            break;
        }
    }
    if(flag ==1)
        return 0;
    else
        return 1;
}