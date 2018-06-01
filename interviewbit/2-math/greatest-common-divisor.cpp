int Solution::gcd(int A, int B) 
{
    if(A<B) 
    {
        int temp=A;
        A=B;
        B=temp;
    }
    while(B!=0) 
    {
        int temp=B;
        B=A%B;
        A=temp;
    }
    return A;
}
