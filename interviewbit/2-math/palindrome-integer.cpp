int Solution::isPalindrome(int n) 
{
    if (n<0)
    {
        return 0;
    }
    string b = to_string(n);
    reverse(b.begin(), b.end());
    if(b != to_string(n))
        return 0;
    else
        return 1;
}
  //////////////////////////////////////////////////////////////

int Solution::isPalindrome(int n) 
{
    long long int b = 0,s=n;
    if(n<0)
        return 0;
        
    while(s>0)
    {
        b= b*10 + s%10;
        s=s/10;
    }
    if(n!=b)
        return 0;
    else
        return 1;
}
