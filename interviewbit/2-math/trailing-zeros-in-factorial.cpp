int Solution::trailingZeroes(int A) 
{
    int n =A,i=5,count=0;
    while(n/i>=1)
    {
        count = count + n/i;
        i=i*5;
    }
    return count;
}
