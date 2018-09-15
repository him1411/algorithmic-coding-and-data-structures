int Solution::numSetBits(unsigned int A) 
{
    int bit =1,count=0;
    for(int i=0;i<=32;i++)
    {
        if(bit & A)
            count++;
    }
}
