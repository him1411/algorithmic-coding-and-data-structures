int Solution::reverse(int n) 
{
    int x = n;
    if(n<0)
    {
        n = n*-1;
    }
    long long int ans =0;
    while(n !=0 )
    {
        ans = ans*10 + n%10;
        n = n/10;
    }
    if(ans>=INT_MAX || ans<=INT_MIN)
    {
        return 0;
    }
    else if (x<0)
    {
        return -1*(int)ans;
    }
    else
        return (int)ans;
}