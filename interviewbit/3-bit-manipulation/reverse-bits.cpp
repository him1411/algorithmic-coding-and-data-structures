unsigned int Solution::reverse(unsigned int A) 
{
    unsigned int msb =1,lsb=1,ans=0,i;
    
    for(i=0;i<31;i++)
        msb = msb<<1;
        
    for(i=0;i<32;i++)
    {
        if(msb&A)
            ans = ans|lsb;
        
        lsb = lsb<<1;
        msb = msb>>1;
    }
    return ans;
}
