int Solution::isPower(int n) 
{
    if(n==1)
        return 1;
        
    for (int i=2; i<32; i++)
    {
        for(int j=2 ;j<100000;j++)
        {
            if(pow(j,i)==n)
            {
                return 1;
            }
        }
    }
    return 0;
}
