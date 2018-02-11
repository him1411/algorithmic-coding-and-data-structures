int Solution::gcd(int A, int B) 
{
    if ( B == 0)
  {
    return A;
  }
  else 
  {    
    long long a1 = A % B;
    return Solution::gcd(B,a1);
  }    
}