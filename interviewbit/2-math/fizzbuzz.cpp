vector<string> Solution::fizzBuzz(int n) 
{
    vector <string> a;
    for(int i = 1; i<=n;i++)
    {
        if( i%3==0 && !(i%15==0) )
        {
            a.push_back("Fizz");
        }
        else if ( i%5==0 && !(i%15==0) )
        {
            a.push_back("Buzz");
        }
        else if (i%15==0)
        {
            a.push_back("FizzBuzz");
        }
        else
        {
            a.push_back(to_string(i));
        }
    }
    return a;
}