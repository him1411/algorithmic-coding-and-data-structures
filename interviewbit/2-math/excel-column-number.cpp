int Solution::titleToNumber(string A) 
{
    int r=0,j=0;
    for(int i =A.size()-1;i>=0;i--)
    {
        r = r + (pow(26,j)*(A[i]-'A'+1));
        j++;
    }
    return r;
}
