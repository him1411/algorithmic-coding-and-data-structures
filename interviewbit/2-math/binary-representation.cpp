string Solution::findDigitsInBinary(int A) 
{
    if (A > 1)
    {
        Solution::findDigitsInBinary(A/2);
    }  
    cout<<A%2;
    
    string s="";
    return s;

}